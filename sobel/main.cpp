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
		Sobel(frame, dx, CV_16SC1, 1, 0, 3);
		Sobel(frame, dy, CV_16SC1, 0, 1, 3);
		imshow("x", dx);
		imshow("y", dy);
		waitKey(30);
	}
}