#include "example.h"
#include "myConfig.h"
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    while (true)
    {
        Mat img = Mat(500, 500, CV_8UC3, Scalar(0, 0, 255));
        config::MyConfig config;
        double r = config.getConfig("example");
        example(img, r);
        imshow("img", img);
        int key = waitKey(1000);
        if (key == 27)
            break;
    }
    return 0;
}