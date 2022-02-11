#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

int main()
{
	float w = 362, h = 275;
	cv::Mat matrix, imgWarp;

	std::string path = "./assets/angle.jpg";
	cv::Mat img = cv::imread(path);

	cv::Point2f src[4] = {{187, 110}, {549, 110}, {187, 385}, {549, 385}};
	cv::Point2f dst[4] = {{0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h}};

	matrix = cv::getPerspectiveTransform(src, dst);
	cv::warpPerspective(img, imgWarp, matrix, cv::Point(w, h));

	// cv::imshow("Ingenuity", img);
	cv::imshow("Ingenuity from top", imgWarp);
	cv::waitKey(0);

	return 0;
}