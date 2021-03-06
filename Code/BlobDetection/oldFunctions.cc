// =========================================
//      FUNCTIONS I'M NOT USING ANYMORE     
// =========================================

// average += (new value - average) / group size;


// Pre:  p1, p2 defined cvPoint types (either float or int)
// Post: True if x OR y values are similar
template <class T>
bool xOrySimilar(const T &p1, const T &p2, int diffThresh){
  return ( (difference(p1.x,p2.x) < diffThresh) ||
           (difference(p1.y,p2.y) < diffThresh) );
};



  // =====================================
  //      Blob Detection and Tracking     
  // =====================================

      if (!trackBlob(*b)){
	blobs.erase(b);
	trackedBlobs--;
      }
      else
	b->life++;

  // Pre:  "blobToTrack" is fully defined
  // Post: A new blob search is started from the center of
  //       "blobToTrack", if the results of the search are similar to
  //       the blob then it is updated and true is returned,
  //       otherwise false is returned for "cannot track"
  bool trackBlob(Blob &blobToTrack) const{
    IntPt newLower(PREDICTED_CENTER(blobToTrack));
    IntPt newUpper(newLower);
    if (inBounds(newLower.x, newLower.y)){
      Px newColor(img.at<Px>(newLower.y, newLower.x));
      if (channelsSimilar(blobToTrack.color, newColor)){
	recursiveMedianSearch(newLower, newUpper, newColor);
	updateBlob(blobToTrack, newLower, newUpper, newColor); // Update this blob
	return true;
      }
    }
    return false;
  }

	blobVelocityMagnitude(*b) >= minVelocity){

	       const int minVelocity=0){

#define PREDICTED_CENTER(b) cv::Point((b.lower.x+b.lowerVelocity.x +   \
                                       b.upper.x+b.upperVelocity.x)/2, \
                                      (b.lower.y+b.lowerVelocity.y +   \
                                       b.upper.y+b.upperVelocity.y)/2)
// ^^ Returns a cv::Point of the predicted center point by combining
//    the (lower + lowerVelocity) and (upper + upperVelocity)

typedef cv::Point2f FloatPt; // "FloatPt" for float point
  FloatPt lowerVelocity;
  FloatPt upperVelocity;
      lowerVelocity(0.0,0.0), upperVelocity(0.0,0.0){}
      lowerVelocity(b.lowerVelocity), upperVelocity(b.upperVelocity){}

// Pre:  All defined, and oldPosition should be updated with newPosition
// Post: Based off the change in position a new velocity is
//       calculated, next the change in velocity is calculated and the
//       resultant acceleration is capped as to make movement more
//       consistant.  Based off of capped acceleration, Oldvelocity and 
//       oldPosition are updated.
void updatePosition(int &oldPosition, const int &newPosition, 
		    float &oldVelocity){
  const float newVelocity(newPosition - oldPosition);
  float acceleration(newVelocity - oldVelocity);
  setMin(acceleration, MAX_ACCELERATION);
  setMax(acceleration, -MAX_ACCELERATION);
  oldVelocity += acceleration;
  oldPosition += oldVelocity;
}

// Pre:  toUpdate and all new data are defined
// Post: toUpdate is modified to be more similar to the new data
void updateBlob(Blob &toUpdate, const IntPt &newLower, 
		const IntPt &newUpper, const Px &newColor){
  updateColorAverage(toUpdate.color, newColor);      

  updatePosition(toUpdate.lower.x, newLower.x, toUpdate.lowerVelocity.x);
  updatePosition(toUpdate.lower.y, newLower.y, toUpdate.lowerVelocity.y);

  updatePosition(toUpdate.upper.x, newUpper.x, toUpdate.upperVelocity.x);
  updatePosition(toUpdate.upper.y, newUpper.y, toUpdate.upperVelocity.y);
}

// TODO:  This function will return the velocity magnitude of a blob
float blobVelocityMagnitude(const Blob &b){
  float x((b.lowerVelocity.x+b.upperVelocity.x)/2);
  float y((b.lowerVelocity.y+b.upperVelocity.y)/2);
  return((difference(0.0f, y) + difference(0.0f, x)) / 2);
}

      const IntPt center(BLOB_CENTER((*b)));
      const IntPt nextCenter(PREDICTED_CENTER((*b)));
      cv::line(outImg, center, nextCenter, cv::Scalar(0,180,0), 2);
	blobVelocityMagnitude(*b) >= minVelocity){


// TODO:  This function will absorb blobs to merge them
void absorbBlob(Blob &toUpdate, Blob &toAbsorb){
  setMin(toUpdate.lower.x, toAbsorb.lower.x);
  setMin(toUpdate.lower.y, toAbsorb.lower.y);
  setMax(toUpdate.upper.x, toAbsorb.upper.x);
  setMax(toUpdate.upper.y, toAbsorb.upper.y);
  updateColorAverage(toUpdate.color, toAbsorb.color);      
  updateAverage(toUpdate.lowerVelocity.x, toAbsorb.lowerVelocity.x, 10);
  updateAverage(toUpdate.lowerVelocity.y, toAbsorb.lowerVelocity.y, 10);
}


//       xAndySimilar for lowerVelocity OR upperVelocity
//  &&
	   // // ^^ "upper"s are similar
	   // (xAndySimilar(blob1.lowerVelocity, blob2.lowerVelocity,
	   // 		 VELOCITY_DIFFERENCE_THRESHOLD) ||
	   //  // ^^ "lowerVelocity"s are similar
	   //  xAndySimilar(blob1.upperVelocity, blob2.upperVelocity,
	   // 		 VELOCITY_DIFFERENCE_THRESHOLD)) );
	   //  // ^^ "upperVelocity"s are similar



#define SAMPLE_COLOR Px(200,0,0)   // The color all samples are drawn in
#define POSITION_DYNAMIC_AVERAGE_BUFFER 4 //Position dynamic average buffer size


int g_position_dynamic_avg_buffer(POSITION_DYNAMIC_AVERAGE_BUFFER);
    cv::createTrackbar("Position dynamic average buffer", 
		       TRACKBAR_WINDOW, &g_position_dynamic_avg_buffer, 20);




  // Pre:  "blob" is fully defined
  // Post: The velocity, color, and bounds of this object are updated
  void updateObject(const Blob &blob){
    updateColorAverage(color, blob.color);
    updateMovingPoint(lower, blob.lower);
    updateMovingPoint(upper, blob.upper);    
  }


// Pre:  "toUpdate" and "newPoint" are defined
// Post: The dynamic average function is called on x and y values,
//	 changing "toUpdate" to be more similar to "newPoint"     
template <class T>
void updateXYAverage(T &toUpdate, const T &newPoint){
  updateAverage(toUpdate.x, newPoint.x, g_position_dynamic_avg_buffer);
  updateAverage(toUpdate.y, newPoint.y, g_position_dynamic_avg_buffer);
}


  int minObjectsToTrack;
    cv::createTrackbar("Minimum objects to track", TRACKBAR_WINDOW,
		       &minObjectsToTrack, 30);


  int computations;
    computations = 16;
    cv::createTrackbar("Computations", TRACKBAR_WINDOW, 
		       &computations, 80);


int g_pos_dab(POSITION_DYNAMIC_AVERAGE_BUFFER);
int g_color_dab(COLOR_DYNAMIC_AVERAGE_BUFFER);
int g_point_diff_thresh(POINT_DIFFERENCE_THRESHOLD);
int g_color_diff_thresh(COLOR_DIFFERENCE_THRESHOLD);
int g_max_blobs_in_object(MAX_BLOBS_IN_OBJECT);
int g_velocity_diff_thresh(VELOCITY_DIFF_THRESHOLD);
    cv::createTrackbar("Minimum blob dimension", TRACKBAR_WINDOW,
		       &g_min_blob_dimension, img.rows / 2);
    cv::createTrackbar("Point difference threshold", TRACKBAR_WINDOW,
		       &g_point_diff_thresh, (img.cols / 10));
    cv::createTrackbar("Velocity difference threshold", TRACKBAR_WINDOW,
		       &g_velocity_diff_thresh, (img.cols / 10));
    cv::createTrackbar("Color dynamic average buffer",
		       TRACKBAR_WINDOW, &g_color_dab, 20);

    cv::createTrackbar("Max blobs in Object", TRACKBAR_WINDOW, 
		       &g_max_blobs_in_object, 100);


Pt g_toTrack(0,0);

// TODO:  This will add the clicked point to the "Objects of interest"
//        vector
void onMouse( int event, int x, int y, int flags, void* params){
  if (event == CV_EVENT_LBUTTONDOWN){
    g_toTrack.x = x;
    g_toTrack.y = y;
  }
}

  // =========================
  //      Object tracking     
  // =========================
	updateTracking();
// TODO:  This function will begin tracking user clicked objects
  void updateTracking(){
    if (g_toTrack != Pt(0,0)){      
      trackedObjects.push_back(Object(img.at<Px>(g_toTrack.y, g_toTrack.x),
				      g_toTrack, g_toTrack));
      g_toTrack.x = g_toTrack.y = 0;
      Object &newObject(trackedObjects[trackedObjects.size()-1]);
    }
  }


  Pt toTrack;
  ObjVec trackedObjects;
  // TODO:  Draws all of the objects being tracked
  void drawTrackedObjects(Img &outImg){
    for (ObjIter obj(trackedObjects.begin()); obj<trackedObjects.end(); obj++){
      drawObject(outImg, *obj);
    }
  }

//	   (! (overlaps(blob1,blob2) || overlaps(blob2,blob1)) &&
// (pointsDiff(blob1.lower, blob2.lower) || 
//  pointsDiff(blob1.upper, blob2.upper))) );

// updatePointAverage(lower, blob.lower);
// updatePointAverage(upper, blob.upper);


  // Pre:  col and row are within the bounds of "img"
  // Post: Four different sloped lines are projected outwards starting
  //        from "oldBlob.center" in "img" and the median point of the
  //        "jumpToEdge" searches for both directions on that line is
  //        used as the starting point for the searches on the next
  //        line.  This is done with "computations" calls to the
  //        "jumpToEdge" function and updates the bounds


  // Method: Returns the predicted next location
  Blob prediction(){
    return( Blob(color, lower+velocity, upper+velocity) );
  }

  // Pre:  outImg is of the same dimensions as the image used to
  //         calculate all of the points stored in "blobs"
  // Post: outImg is marked with blue rectangles marking the bounds of
  //         the blobs stored in "blobs"
  void drawBlobBounds(Img &outImg){
    for (int b(0); b<blobs.size(); b++){
      rectangle(outImg, blobs[b].lower, blobs[b].upper, 
		cv::Scalar(blobs[b].color[0],
			   blobs[b].color[1],
			   blobs[b].color[2]));
      cv::line(outImg, BLOB_CENTER(blobs[b]), 
	       BLOB_CENTER(blobs[b])+blobs[b].velocity,
	       cv::Scalar(0,255,0), 2);
    }
  }


  // TODO:  This function will perform the add operation to the
  //        objects vector with a given blob and will also remove
  //        the blob if it lies in an object that already has carrying
  //        capacity of blobs in it
  void addBlobToObject(const BlobIter &currentBlob){
	//	overlaps(*b, currentBlob));

    bool addedBlob(false);
    bool shouldRemove(false);
    for (int obj(0); obj<objects.size(); obj++){
      objects[obj].blobAdd(currentBlob, addedBlob, shouldRemove);
      if (addedBlob || shouldRemove)
	break;
    }
    if (shouldRemove)
      blobs.erase(currentBlob);
    else if (!addedBlob)
      objects.push_back(Object(currentBlob));
  }

cv::fillConvexPoly(outImg, bounds, 4, 
		   cv::Scalar(objects[obj].color[0],
			      objects[obj].color[1],
			      objects[obj].color[2]));


  int dynamicAvgBufferSize;
    dynamicAvgBufferSize = 4;
    cv::createTrackbar("Dynamic Buffer Size", TRACKBAR_WINDOW, 
		       &dynamicAvgBufferSize, 16);


      // Dynamically calculate average
      currentBlob.center.x += (x-currentBlob.center.x) / dynamicAvgBufferSize;
      currentBlob.center.y += (y-currentBlob.center.y) / dynamicAvgBufferSize;


  // Pre:  toUpdate and newData fully defined
  // Post: The member data of "toUpdate" is updated with the member
  //       data of "newData" using the dynamic average function
  void updateBlob(Blob &toUpdate, Blob &newData){
    // Update center and dimensions of blob
    toUpdate.center.x += 
      (newData.center.x - toUpdate.center.x) / dynamicAvgBufferSize;
    toUpdate.center.y += 
      (newData.center.y - toUpdate.center.y) / dynamicAvgBufferSize;

    toUpdate.lower.x += 
      (newData.lower.x - toUpdate.lower.x) / dynamicAvgBufferSize;
    toUpdate.lower.y += 
      (newData.lower.y - toUpdate.lower.y) / dynamicAvgBufferSize;

    toUpdate.upper.x += 
      (newData.upper.x - toUpdate.upper.x) / dynamicAvgBufferSize;
    toUpdate.upper.y += 
      (newData.upper.y - toUpdate.upper.y) / dynamicAvgBufferSize;
    // Increment occurance
    toUpdate.occurance ++;
  }


  // Deep copy constructor
  Blob(const Blob &blob){
    color = blob.color;
    lower = blob.lower;
    upper = blob.upper;
    center = blob.center;
    occurance = blob.occurance;
  }

  // TODO:  The print statment for a blob
  friend std::ostream& operator<<(std::ostream &out, const Blob &blob){
    out << "color: " << blob.color << std::endl;
    out << "lower: " << blob.lower << std::endl;
    out << "upper: " << blob.upper << std::endl;
    out << "center: " << blob.center << std::endl;
    out << "occurance: " << blob.occurance << std::endl;
    return(out);
  }

#define SQRT_PRECISION 1.0 // The minimal accuracy of the square root

// Pre:  0 < num, 0 < precision
// Post: The approximate square root of num to a set digit accuracy
float sqrt(float num){
  bool flipped = num < 1.0; // if less than one, needs to be flipped
  if (flipped) num = 1.0 / num; // Make the number > 1
  float last = 1.0;  float guess = 2.0;
  float diff = (num-guess*guess);
  while ( diff*diff > SQRT_PRECISION){
    if (guess*guess < num){
      last = guess;
      guess = (guess+num)/2;
    }
    else
      guess = (guess+last)/2;
    diff = (num-guess*guess);
  }
  if (flipped) guess = 1.0 / guess; // flip back if necessary
  return(guess);                                                                       }

#define BLOB_PX(y,x) blobImg.at<cv::Vec3b>(y,x)
#define BLOB_CENTER(y,x) blobImg.at<cv::Vec3b>(y,x)[1]
#define BLOB_HALF_WIDTH(y,x) blobImg.at<cv::Vec3b>(y,x)[0]
#define BLOB_HALF_HEIGHT(y,x) blobImg.at<cv::Vec3b>(y,x)[2]
#define PX2SCALAR(px) cv::Scalar(px[0],0,px[2])

  //  int blobCenterCheckRange;
  //  int blobCenterIncrement;
  //  int drawBlobThresh;  
  //  int bImgRatio;
  //  Img blobImg;
    //    blobCenterCheckRange = 1;
    //    blobCenterIncrement = 20;
    //    drawBlobThresh = 200;
    //    bImgRatio = 1;

  // Pre:  Given values defined and within bounds of blobImg
  // Post: The blob information stored in the pixel location
  //       "(xAvg,yAvg)" is updated with the newest dimensions
    applyRatio(xAvg, yAvg, xMin, yMin, xMax, yMax);
    blobImg = outImg;
    bImgRatio = 2;
    img.copyTo(blobImg);
    Img blobImgRegion(blobImg, cv::Range(0,img.rows/bImgRatio),
		      cv::Range(0,img.cols/bImgRatio));
      blobImg.setTo(BLACK_SC);
      if ((img.rows / blobImgRegion.rows) != bImgRatio)
	blobImgRegion = blobImg(cv::Range(0,img.rows/bImgRatio),
				cv::Range(0,img.cols/bImgRatio));

    std::cerr << "blobCenterIncrement: " << blobCenterIncrement << std::endl;
    std::cerr << "drawBlobThresh: " << drawBlobThresh << std::endl;
    std::cerr << "bImgRatio: " << bImgRatio << std::endl;
    std::cerr << "blobImg.rows: " << blobImg.rows << std::endl;
    std::cerr << "blobImg.cols: " << blobImg.cols << std::endl;
    cv::createTrackbar("Blob Image reduction ratio", TRACKBAR_WINDOW, 
		       &bImgRatio, 6);
    cv::createTrackbar("Blob Average Increment", TRACKBAR_WINDOW,
		       &blobCenterIncrement, 125);
    cv::createTrackbar("Blob Center maxima check range",
		       TRACKBAR_WINDOW, &blobCenterCheckRange, 10);

  // // Pre:  all values given have been defined
  // // Post: All values given are divided by bImgRatio, translating them
  // //       to "blob image" coordinates
  // void applyRatio(float &xAvg, float &yAvg, int &xMin, int &yMin,
  // 		  int &xMax, int &yMax){
  //   xAvg /= bImgRatio;   yMax /= bImgRatio;
  //   yAvg /= bImgRatio;   xMin /= bImgRatio;
  //   xMax /= bImgRatio;   yMin /= bImgRatio;
  // }
    // BLOB_HALF_WIDTH(yAvg,xAvg) += 
    //   ((xHalfRange-BLOB_HALF_WIDTH(yAvg,xAvg))/dynamicAvgBufferSize);
    // BLOB_HALF_HEIGHT(yAvg,xAvg) += 
    //   ((yHalfRange-BLOB_HALF_HEIGHT(yAvg,xAvg))/dynamicAvgBufferSize);
    // BLOB_CENTER(yAvg,xAvg) += blobCenterIncrement;

  // TODO:  Draws a rectangle around the "Blobs" stored in this vector
  void  drawBlobBounds(){    
    if (BLOB_CENTER(yAvg,xAvg) >= drawBlobThresh){
      Pt minCorner(xAvg-BLOB_HALF_WIDTH(yAvg,xAvg),
		   yAvg-BLOB_HALF_HEIGHT(yAvg,xAvg));
      Pt maxCorner(xAvg+BLOB_HALF_WIDTH(yAvg,xAvg),
		   yAvg+BLOB_HALF_HEIGHT(yAvg,xAvg));
      rectangle(blobImg, minCorner, maxCorner, PX2SCALAR(BLOB_PX(yAvg,xAvg)));
      rectangle(img, minCorner*bImgRatio, maxCorner*bImgRatio,
		PX2SCALAR(BLOB_PX(yAvg,xAvg)));
    }
  } 

  // TODO:  This function will check if the current blob center is a
  //        local maximum
  bool goodToDrawBlob(const int &currCol, const int &currRow){
    bool shouldDraw = true;
    for (int col(-blobCenterCheckRange);
	 col<blobCenterCheckRange; col++){
      for (int row(-blobCenterCheckRange);
	   row<blobCenterCheckRange; row++){
	shouldDraw = (shouldDraw &&
		      BLOB_CENTER(currRow,currCol) >= BLOB_CENTER(row,col));
      }
    }
    return (shouldDraw);
  }
  // WARNING:  This function does not handle boundary of the image cases






// USED TO COMBINE TWO IMAGES

// TODO:  This function will add img1 and img2 placing the results in 2
void addImages( const cv::Mat &img1, cv::Mat &img2 ){
  for (int row(0); row < img1.rows; row++){
    for (int col(0); col < img1.cols; col++){
      img2.at<px>(row,col) = img1.at<px>(row,col) + img2.at<px>(row,col);
    }
  }    
}


// This function returns a matrix whose contents are only those that
//  were in both images provided and above "threshold"

// Pre:  img1 and img2 are defined and of the same dimensions
// Post: A cv::Mat that has the bright spots from both images
cv::Mat andThresh(cv::Mat img1, cv::Mat img2){
  int rows(img1.rows);
  int cols(img1.cols);
  cv::Mat combo(rows, cols, CV_8UC3);

  for (int row(0); row < rows; row ++){
    for (int col(0); col < cols; col ++){
      combo.at<cv::Vec3b>( row, col ) =
      	(img1.at<cv::Vec3b>(row, col) + img2.at<cv::Vec3b>(row, col))
      	/ 2;
    }
  }
  return(combo);
}


// Pre:  img, x, y , xMove, yMove all defined, optional initial
//       jumpScale and maxChannelDiff.
// Post: The farthest point in the (x,y) direction specified that
//       does NOT differ by more than "maxChannelDiff" on any ONE of
//       the channels in the pixel, so color matters. The edge of
//       the image is returned if it is reached.
cv::Point jumpToEdge(const cv::Mat &img, int x, int y,
		     const int &xMove, const int &yMove,
		     const px &blobColor,
		     int jumpScale=DEFAULT_JUMP, 
		     const int &maxChannelDiff=DEFAULT_DIFF_THRESH){
  x += (xMove*jumpScale);  y += (yMove*jumpScale);
  while (jumpScale >= MIN_JUMP_SCALE){
    // If the pixel is in the image and similarly colored, continue to jump
    if (inBounds(img, x, y) &&
	(! channelsDiff(blobColor, img.at<px>(y, x), maxChannelDiff))){
      x += (xMove*jumpScale); y += (yMove*jumpScale);
    }
    else{
      // Subtract out the old jump
      x -= (xMove*jumpScale); y -= (yMove*jumpScale);
      // Divide the jump amount by two
      jumpScale >>= 1;
      // Add the new half jump
      x += (xMove*jumpScale); y += (yMove*jumpScale);      
    }
  }
  return cv::Point(x,y);
}


// Pre:  xDir and yDir defined, only one of them is non-zero
// Post: The next direction to travel (cycles clockwise)
void setUniDirection4(int &xDir, int &yDir){
  if (yDir == -1){
    yDir = 0;  xDir = 1;
  }
  else if (xDir == 1){
    yDir = 1;  xDir = 0;
  }
  else if (yDir == 1){
    yDir = 0;  xDir = -1;
  }
  else{
    yDir = -1; xDir = 0;
  } 
}

// Pre:  inImg and outImg defined and of equal dimensions
//       col and row are the starting point, depth is the max number
//       of "jump to Edge" function calls allowed
// Post: The out image is colored based off the results of performing
//       a single directional search for the boundaries of a blob
void uniDirection4(const cv::Mat &inImg, cv::Mat &outImg,
		   const int &col, const int &row, const int &depth){
  const px blobColor(inImg.at<px>(row, col));
  float ptsFound(0);
  float avgX(col);
  float avgY(row);
  int xDir(0);
  int yDir(-1);
  cv::Point edge(col,row);
  outImg.at<px>(row,col) = px(255,0,0);
  for (int i(0); i<depth; i++){
    edge = jumpToEdge(inImg, edge.x, edge.y, xDir, yDir, blobColor);
    setUniDirection4(xDir, yDir);
    // Dynamically calculate average
    ptsFound++;
    avgX += ((edge.x-avgX)*g_frac)/ptsFound;
    avgY += ((edge.y-avgY)*g_frac)/ptsFound;
    outImg.at<px>(edge.y,edge.x) = px(0,0,255);
  }
  outImg.at<px>(avgY,avgX) = px(0,255,0);
}

// Pre:  xDir and yDir defined, only one of them is non-zero
// Post: The next direction to travel (horizontal / vertical switch)
void setUniDirection8(int &xDir, int &yDir){
  if ((yDir == -1) && (xDir == 0)){
    xDir = 1;
  }
  else if ((xDir ==  1) && (yDir == -1)){
    yDir = 0;
  }
  else if ((yDir ==  0) && (xDir == 1)){
    yDir = 1;
  }
  else if ((yDir ==  1) && (xDir == 1)){
    xDir = 0;
  }
  else if ((xDir ==  0) && (yDir == 1)){
    xDir = -1;
  }
  else if ((xDir == -1) && (yDir == 1)){
    yDir = 0;
  }
  else if ((yDir ==  0) && (xDir == -1)){
    yDir = -1;
  }
  else if ((yDir == -1) && (xDir == -1)){
    xDir = 0;
  } 
  else
    std::cerr << "setUniDirection8 logic crash." 
	      << std::endl;
}

// Pre:  inImg and outImg defined and of equal dimensions
//       col and row are the starting point, depth is the max number
//       of "jump to Edge" function calls allowed
// Post: The out image is colored based off the results of performing
//       a single directional search for the boundaries of a blob
void uniDirection8(const cv::Mat &inImg, cv::Mat &outImg,
		   const int &col, const int &row, const int &depth){
  const px blobColor(inImg.at<px>(row, col));
  float ptsFound(0);
  float avgX(col);
  float avgY(row);
  int xDir(0);
  int yDir(-1);
  cv::Point edge(col,row);
  outImg.at<px>(row,col) = px(255,0,0);
  for (int i(0); i<depth; i++){
    edge = jumpToEdge(inImg, edge.x, edge.y, xDir, yDir, blobColor);
    setUniDirection8(xDir, yDir);
    // Dynamically calculate average
    ptsFound++;
    avgX += ((edge.x-avgX)*g_frac)/ptsFound;
    avgY += ((edge.y-avgY)*g_frac)/ptsFound;
    outImg.at<px>(edge.y,edge.x) = px(0,0,255);
  }
  outImg.at<px>(avgY,avgX) = px(0,255,0);
}

// Pre:  xDir and yDir defined, only one of them is non-zero
// Post: The next direction to travel (cycles clockwise)
void setBiDirection4(int &xDir, int &yDir){
  if (yDir == -1){
    yDir = 1;  xDir = 0;
  }
  else if (yDir == 1){
    yDir = 0;  xDir = 1;
  }
  else if (xDir == 1){
    yDir = 0;  xDir = -1;
  }
  else{
    yDir = -1; xDir = 0;
  } 
}

// Pre:  inImg and outImg of equal dimensions, row and col within
//       the bounds of the image. depth >= 0
// Post: A North/South median followed by a East/West median point,
//       continues until 'depth' is reached.  The starting point is
//       marked blue, the collected dots are marked as red, and the
//       average points are marked as green.
void biDirection4(const cv::Mat &inImg, cv::Mat &outImg,
		  const int &col, const int &row, const int &depth){
  const px blobColor(inImg.at<px>(row, col));
  float avgX(col);
  float avgY(row);
  int xDir(0);
  int yDir(-1);
  cv::Point edge1(col,row);
  cv::Point edge2(col,row);
  outImg.at<px>(row,col) = px(255,0,0);
  for (int i(0); i<depth; i+=2){
    const int x((edge1.x+edge2.x)/2);
    const int y((edge1.y+edge2.y)/2);
    edge1 = jumpToEdge(inImg, x, y, xDir, yDir, blobColor);
    setBiDirection4(xDir, yDir);
    edge2 = jumpToEdge(inImg, x, y, xDir, yDir, blobColor);
    setBiDirection4(xDir, yDir);
    // Dynamically calculate average
    avgX += (x-avgX)/g_frac;
    avgY += (y-avgY)/g_frac;
    outImg.at<px>(edge1.y,edge1.x) = px(0,0,255);
    outImg.at<px>(edge2.y,edge2.x) = px(0,0,255);
  }  
  outImg.at<px>(avgY,avgX) = px(0,255,0);
}


  // int algorithm(3);
  // cv::createTrackbar("Algorithm", TRACKBAR_WINDOW, &algorithm,
  // 		     3, callbackDummy);
  //   	if (algorithm == 0)
  //   	  uniDirection4(img, imgDerriv, col, row, depth);
  //   	else if (algorithm == 1)
  //   	  uniDirection8(img, imgDerriv, col, row, depth);
  //   	else if (algorithm == 2)
  //   	  biDirection4(img, imgDerriv, col, row, depth);
  //   	else if (algorithm == 3)

      //	(! channelsDiff(blobColor, img.at<px>(y, x), maxChannelDiff))){

// // TODO:  This formula will update the average based off the old
// //        average, a new value value, and the number of data points
// //        already contained in the average given
// void updateAverage(float &avg, const int &value, const int &pts){
//   avg += ((value-avg)*g_frac)/pts;
//   // avg += ((value*f)/pts) - ((avg*f)/pts);
//   // avg = avg + (-((avg*f)/pts) + ((value*f)/pts));
//   // avg = avg - ((avg*f)/pts) + ((value*f)/pts);
//   // avg = avg * (1 - f/pts) + ((value*f)/pts);
//   // avg = avg * ((pts-f)/pts) + value * (1/pts);
// }

// // Pre:  px1, px2, maxChannelDiff defined
// // Post: true if the SQUARED difference in pixel values for any ONE
// //       channel exceed "maxChannelDiff"
// bool channelsDiff(const px &px1, const px &px2, 
// 		  const int &maxChannelDiff=DEFAULT_DIFF_THRESH){
//   if ((( (px1[0]+px1[1]+px1[2]) - (px2[0]+px2[1]+px2[2]) ) > maxChannelDiff*3) ||
//       (( (px2[0]+px2[1]+px2[2]) - (px1[0]+px1[1]+px1[2]) ) > maxChannelDiff*3))
//     return true;
//   return false;
// }
