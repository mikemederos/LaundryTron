#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
int main(int argc, char** argv )
{
    Mat image;
    namedWindow("Display window");
    VideoCapture cap(0);

    if(!cap.isOpened()){
        cout << "Cannot open camera";
    }

    while (true)
    {
        cap >> image;
        imshow("Display window", image);
        waitKey(25);
    }
    return 0;
}