#include <iostream>
#include <stdio.h>
#include "ChipUtility.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <unistd.h>

using namespace std;
using namespace cv;

int main(){
	printf ("Raspberry Pi - MCP23017 Test\n");

	ChipUtility chip;

	chip.initChips(4); // using 4 chips
	chip.triggerAllLED();
	sleep(3);
	chip.clearAllLED();

	// for testing OpenCV
	// system("raspistill -o image.jpg");
 //    Mat image = imread("image.jpg");
 //    imwrite("output.jpg", image);

	return 0;
}
