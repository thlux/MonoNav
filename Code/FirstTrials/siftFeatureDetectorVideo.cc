#include <stdio.h>
#include <iostream>
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/nonfree/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/nonfree/nonfree.hpp"

#define IMAGE_DISPLAY_WINDOW "Image"
#define TRACKBAR_WINDOW "Testing SIFT"
#define MAX_HESSIAN 10000 
#define MAX_WAIT_MS 300
#define MAX_OCTAVELAYERS 8
#define MAX_NUMOCTAVES 16
#define MAX_EXTENDED 1
#define MAX_UPRIGHT 1


using namespace cv;

void readme();

int g_wait_ms = 1; // The milisecond wait between updates
int g_numFeatures = 2000; // The hessian value for the detector
int g_numOctaves = 1; // Number of gaussian pyramid octaves, bigger
		      // numbers detect bigger features
int g_octaveLayers = 1; // Number of images within each octave
int g_contrastThresh = 0; // True if extended descriptors should be computed
int g_edgeThresh = 1;  // True if orientation does not need to be computed

// Callback, has no purpose here, for OpenCV trackbar
void callbackDummy( int, void* ){}

// Header, defined after main
void siftDetection( vector<Mat> & images, char *argv[] );

/** @function main */
int main( int argc, char *argv[] )
{
  vector<Mat> images;
  for (int image=1; image < argc; image++){
    images.push_back( imread( argv[image] ) );
    namedWindow( argv[image], WINDOW_AUTOSIZE );
  }
  VideoCapture vid(0);
  if (argc == 2)
    vid.open(argv[1]);

  //-- Step 1: Detect the keypoints using SIFT Detector
  for (; ! (waitKey(1) > 0) ;){
    siftDetection( images, argv );
  }
  return 0;
}

// Pre:  image is defined
// Post: The keypoints in image are located using a
//       siftFeatureDetector and then displayed in a window
void siftDetection( vector<Mat> &images, char *argv[] ){
  SIFT detector(g_numFeatures, g_octaveLayers, 
		g_contrastThresh, g_edgeThresh);
  for (int img=0; img<images.size(); img++){
    std::vector<KeyPoint> keypoints;
    detector.detect( images[img] , keypoints );
    //-- Draw keypoints
    Mat img_keypoints;
    drawKeypoints( images[img], keypoints, img_keypoints,
		   Scalar::all(-1), 
		   DrawMatchesFlags::DEFAULT );

    //-- Show detected (drawn) keypoints
    imshow( argv[img+1] , img_keypoints );
  }
}

/** @function readme */
void readme()
{ 
  std::cout << " Usage: ./SIFT_detector <vid>" << std::endl; }
