#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
	Mat buah = imread("../gambar/fruits.png");
	Mat buahInv = Mat::zeros(buah.size(), buah.type());

	for (int i=0; i<buah.rows; i++) {
		for (int j=0; j<buah.cols; j++) {
			for (int k=0; k<3; k++) {
				buahInv.at<Vec3b>(i,j)[k] = 255 - buah.at<Vec3b>(i,j)[k];
			}
		}
	}
	
	namedWindow("Gambar buah", WINDOW_AUTOSIZE);
	imshow("Gambar buah", buah);

	namedWindow("Buah Inverted", WINDOW_AUTOSIZE);
	imshow("Buah Inverted", buahInv);
	waitKey();
}
