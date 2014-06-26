#include <iostream> // For "cerr"
#include <opencv2/opencv.hpp> // Defines the namespace "cv" and all
                              //  the cv functions and types used
#include <assert.h>

#define EDGES_WINDOW "EDGES SON"
#define ORIGINAL_IMAGE "Original Image"
#define ESC_KEY 1048603 // Escape key on hp-elitebook

typedef cv::Vec3b px; // "px" for pixel 

// Used for an unnecessary callback, no function
void callbackDummy(int,void*){}

// Returns the max of two integers as an integer, defaults to a
const int& max( const int &a, const int &b ){
  if (a >= b)
    return a;
  return b;
}

// Pre:  inImg.size == outImg.size
//       from is defined
//       step > 0
// Post: The derrivative of the image is taken using "from" as the
//       relative pixel of comparison for each point, step is used to
//       increment the search meaning a higher step results in a
//       sparsely defined
void derrivative(const cv::Mat &inImg, cv::Mat &outImg, 
		 const cv::Point &from, const int &step){
  const int border( max( max(from.y, -from.x), max(from.y, -from.y) ) );
  for (int row(border); row < (inImg.rows-border); row+=step){
    for (int col(border); col < (inImg.cols-border); col+=step){
      outImg.at<px>( row, col ) = 
	inImg.at<px>( row, col ) -
	inImg.at<px>( row+from.y, col+from.x );
    }
  }  
}

// TODO:  This function will add img1 and img2 placing the results in 2
void addImages( const cv::Mat &img1, cv::Mat &img2 ){
  for (int row(0); row < img1.rows; row++){
    for (int col(0); col < img1.cols; col++){
      img2.at<px>(row,col) = img1.at<px>(row,col) + img2.at<px>(row,col);
    }
  }    
}

// TODO:  This function will provide testing ground for the vector
//        based image derrivative
int main(int argc, char *argv[]){
  cv::VideoCapture vid(0);
  cv::Mat img; // Open the image provided
  vid >> img;
  if (argc >= 2)
    img = cv::imread(argv[1]);
  cv::Mat imgDerriv(img.clone());
  cv::Mat imgDerriv1(img.clone());
  cv::Mat imgDerriv2(img.clone());
  cv::Mat imgDerriv3(img.clone());

  int xShift(6);  int yShift(5);
  int stepSize(1); // The "sparseness" of the image

  cv::namedWindow(ORIGINAL_IMAGE, CV_WINDOW_NORMAL);
  cv::namedWindow(EDGES_WINDOW, CV_WINDOW_NORMAL);

  // cv::createTrackbar("X Shift: ",EDGES_WINDOW,
  // 		     &xShift, 10 ,callbackDummy);
  // cv::createTrackbar("Y Shift: ",EDGES_WINDOW,
  // 		     &yShift, 10 ,callbackDummy);
  cv::createTrackbar("Step Size: ",EDGES_WINDOW,
		     &stepSize, 10 ,callbackDummy);

  while (cv::waitKey(1) != ESC_KEY){
    if (argc < 2)
      vid >> img;
    if (stepSize < 1)
      stepSize = 1;
    //    derrivative(img, imgDerriv, cv::Point(xShift-5,yShift-5), stepSize);
    derrivative(img, imgDerriv , cv::Point(-1,0), stepSize);
    derrivative(img, imgDerriv1, cv::Point(1, 0), stepSize);
    derrivative(img, imgDerriv2, cv::Point(0,-1), stepSize);
    derrivative(img, imgDerriv3, cv::Point(0, 1), stepSize);
    addImages(imgDerriv3, imgDerriv);
    addImages(imgDerriv2, imgDerriv);
    addImages(imgDerriv1, imgDerriv);
    g_derriv = derriv(g_sparseImg);      
    cv::imshow(ORIGINAL_IMAGE, img);
    cv::imshow(EDGES_WINDOW, imgDerriv);
  }
  return 0;
}
