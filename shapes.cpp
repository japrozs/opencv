#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main()
{
	cv::Mat img(512, 512, CV_8UC3, cv::Scalar(255, 255, 255));

	cv::circle(img, cv::Point(256, 256), 155, cv::Scalar(0, 0, 255), cv::FILLED);
	cv::rectangle(img, cv::Point(130, 226), cv::Point(382, 286), cv::Scalar(255, 255, 255), cv::FILLED);

	cv::imshow("image", img);
	cv::waitKey(0);

	return 0;
}