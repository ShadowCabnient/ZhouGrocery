#include<opencv2/opencv.hpp>
#include<iostream>
#include <string>
using namespace cv;

void ImageThreshold(String str) {
    Mat image = imread(str);

    imshow("test_opencv", image);
    waitKey(0);
}
int main() {
    String str = "C:/Users/abc/Desktop/cat.jpg";
    std::cout << "Hello, world" << std::endl;
    ImageThreshold(str);
    std::cout << str << std::endl;
    return 0;
}

