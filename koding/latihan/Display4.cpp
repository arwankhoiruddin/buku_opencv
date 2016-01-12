#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

Mat subImage(Mat image, Size s) {
	Mat subImage = Mat::zeros(s, image.type());

	for (int i=0; i<s.height; i++) {
		for (int j=0; j<s.width; j++) {
			for (int k=0; k<3; k++) {
				subImage.at<Vec3b>(i,j)[k] = image.at<Vec3b>(i,j)[k];
			}
		}
	}

	namedWindow("Original image", WINDOW_AUTOSIZE);
	imshow("Original image", image);

	namedWindow("Cropped image", WINDOW_AUTOSIZE);
	imshow("Cropped image", subImage);
}

int main() {
	Mat buah = imread("../gambar/fruits.png");
	Size s;
	s.height = 200;
	s.width = 200;
	Mat cropped = subImage(buah, s);
	waitKey();
}
