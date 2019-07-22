#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/video/video.hpp>
#include <opencv2/video/tracking.hpp>
#include <stdio.h>
#include <iostream>
#include <sstream>
//#include <opencv2/contrib/contrib.hpp>
#include <opencv/cv.h>
#include <opencv/cv.hpp>
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <math.h>
#include <opencv/cv.h>
#include <opencv/cv.hpp>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
Mat im = imread("/home/mmwm/bwb.jpg");
Mat im1 = imread("/home/mmwm/7232999-nature-background-green-grass-trees-and-cloudy-sky.jpg");
Mat im2 = imread("/home/mmwm/Desktop/Finsec-red-balls.png");
resize(im1,im1,Size(500,500));

Mat im_gry, im_hsv, trs;

cvtColor(im2,im_gry,CV_BGR2GRAY);
cvtColor(im2,im_hsv,CV_BGR2HSV);

inRange(im_hsv,Scalar(0,12,70),Scalar(10,250,250),trs);

imshow("image",im2);
imshow("image_gray",im_gry);
imshow("image_hsv",im_hsv);
imshow("bin",trs);
waitKey(0);
}
