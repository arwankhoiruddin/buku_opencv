#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void showImage(Mat image, int figcount) {
	stringstream fig;
	fig << "Figure " << figcount;
	string figname = fig.str();
    	namedWindow(figname);
    	imshow(figname, image);
}

int main(int argc, char** argv )
{
	int figcount = 0;
	// grayscale image
    	Mat image = imread("flag.jpg", 0 );

	int rows = image.rows;
	int cols = image.cols;
	cout << "rows: " << rows << " cols: " << cols << endl;

	showImage(image, figcount++);

	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			if (image.at<uchar>(i,j) > 100) {
				image.at<uchar>(i,j) = 0;
			}
		}
	}

	showImage(image, figcount++);

	// color image
	Mat plane = imread("standard_images/airplane.png", 1);

	showImage(plane, figcount++);

    	waitKey(0);

    	return 0;
}
