#include <iostream>
#include <stdio.h>
#include "ChipUtility.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(){
	ChipUtility chip;

	chip.initChips(1); // using 4 chips
	chip.triggerLED(7, true);
  	printf ("Raspberry Pi - MCP23017 Test\n") ;

	// for testing OpenCV
	// system("raspistill -o image.jpg");
 //    Mat image = imread("image.jpg");
 //    imwrite("output.jpg", image);

	return 0;
}
