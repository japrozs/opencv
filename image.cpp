#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main()
{
	std::string path = "./assets/main.jpg";
	cv::Mat img = cv::imread(path);
	cv::Mat imgGray, imgBlur, imgCanny, imgDilated, imgEroded;

	cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);
	cv::GaussianBlur(img, imgBlur, cv::Size(3, 3), 3, 0);
	cv::Canny(imgBlur, imgCanny, 35, 150);

	cv::Mat kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));
	cv::dilate(imgCanny, imgDilated, kernel);
	cv::erode(imgDilated, imgEroded, kernel);

	// cv::imshow("image regular", img);
	// cv::imshow("image grayscale", imgGray);
	// cv::imshow("image blur", imgBlur);
	// cv::imshow("image canny", imgCanny);
	// cv::imshow("image dilated", imgDilated);
	cv::imshow("image eroded", imgEroded);

	cv::waitKey(0);
}