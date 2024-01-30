#include "example.h"

void example(Mat &img, double r)
{
    circle(img, Point(250, 250), r, Scalar(255, 0, 0), 2);
}