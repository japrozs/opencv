#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

/*  Read from an image */
// int main()
// {
// 	std::string path = "./assets/main.jpg";
// 	// read an image from path
// 	cv::Mat img = cv::imread(path);
// 	cv::imshow("img", img);
// 	cv::waitKey(0);

// 	return 0;
// }

// int main()
// {
// 	std::string path = "./assets/landing.mp4";
// 	cv::VideoCapture cap(path);
// 	cv::Mat img;
// 	while (true)
// 	{
// 		cap.read(img);

// 		cv::imshow("video", img);
// 		cv::waitKey(1);
// 	}

// 	return 0;
// }

int main()
{
	cv::VideoCapture cap(1200);
	cv::Mat img;

	while (true)
	{
		cap.read(img);

		cv::imshow("webcam", img);
		cv::waitKey(0);
	}

	return 0;
}
