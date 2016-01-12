#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void latihan2() {
	// sub image
	int ylength = 20;
	int xlength = 20;
	Mat image = imread("flat.jpg", 0);
	//Mat subImage = Mat(ylength, xlength, CV_64F, double(0));

	//for (int i=0; i<ylength-1; i++) {
	//	for (int j=0; j<xlength; j++) {
	//		subImage.at<double>(i,j) = image.at<double>(i,j);
	//	}
	//}

	namedWindow("Figure 1", WINDOW_NORMAL);
	imshow("Figure 1", image);
}

int main(int argc, char** argv )
{
	latihan2();
	waitKey();
    	return 0;
}
