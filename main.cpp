#include <iostream>
#include <stdio.h>
#include <wiringPi.h>
#include <mcp23017.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(){
	int i, bit ;

  	wiringPiSetup () ;
  	mcp23017Setup (100, 0x20) ;
	
  	printf ("Raspberry Pi - MCP23017 Test\n") ;
	cout << "Hello world" << endl;
	
	// for testing OpenCV
	system("raspistill -o image.jpg");
        Mat image = imread("image.jpg");
        imwrite("output.jpg", image);

	return 0;
}
