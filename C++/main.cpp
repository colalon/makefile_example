#include <stdio.h>
#include "a/a.h"
#include <opencv2/opencv.hpp>

using namespace cv;

int main(){
    printf("Hello World\n");
    int a;
    a=aaa(100);
    printf("%d\n",a);
    //////////////////////////
    Mat im,gray;
    im=imread("./lena.jpg");
    cvtColor(im, gray, CV_BGR2GRAY);
    namedWindow("Display window", WINDOW_AUTOSIZE);
    imshow("Display window", im);
    namedWindow("Display gray", WINDOW_AUTOSIZE);
    imshow("Display gray", gray);
    waitKey(0);
    /////////////////////////
    return 0;
}