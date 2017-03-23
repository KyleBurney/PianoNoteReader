#include <iostream>
#include <stdio.h>
#include "ChipUtility.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(){
	ChipUtility chip;

	chip.initChips(4); // using 4 chips
	chip.triggerLED(0, true);
  	printf ("Raspberry Pi - MCP23017 Test\n") ;

	// for testing OpenCV
	system("raspistill -o image.jpg");
    Mat image = imread("image.jpg");
    imwrite("output.jpg", image);

	return 0;
}
