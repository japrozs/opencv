#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main()
{
	cv::Mat img = cv::imread("./assets/main.jpg");
	cv::Mat imgResize, imgCrop;

	std::cout << img.size() << std::endl;
	// cv::resize(img, imgResize, cv::Size(400, 150));
	// cv::resize(img, imgResize, cv::Size(), 0.5, 0.5);

	cv::Rect roi(253, 355, 150, 200); // picture of ingenuity
	imgCrop = img(roi);

	// cv::imshow("image", img);
	// cv::imshow("image resized", img);
	cv::imshow("image cropped", imgCrop);
	cv::waitKey(0);

	return 0;
}