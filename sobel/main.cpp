#include<iostream>
#include<opencv2/opencv.hpp>
using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap(0);
	double scale = 0.5;

	while (1) {
		Mat frame;
		Mat hsvMat;
		Mat detectMat;
		cap >> frame;
		Mat fframe;
		Mat dx;
		Mat dy;
		Mat abs_dx;
		Mat abs_dy;
		Sobel(frame, dx, CV_16SC1, 1, 0, 3);
		Sobel(frame, dy, CV_16SC1, 0, 1, 3);
		convertScaleAbs(dx, abs_dx);
		convertScaleAbs(dy, abs_dy);
		imshow("x", abs_dx);
		imshow("y", abs_dy);
		waitKey(30);
	}
}