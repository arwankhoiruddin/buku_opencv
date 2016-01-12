#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
	Mat buah = imread("../gambar/fruits.png");
	namedWindow("Gambar buah", WINDOW_AUTOSIZE);
	imshow("Gambar buah", buah);
	waitKey();
}
