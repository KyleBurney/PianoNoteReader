#include <iostream>
#include <stdio.h>
#include "ChipUtility.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <unistd.h>

using namespace std;
using namespace cv;

enum keys = {
	C1, Cs1, D1, Ds1, E1, F1, Fs1, G1, Gs1, A1, As1, B1,
	C2, Cs2, D2, Ds2, E2, F2, Fs2, G2, Gs2, A2, As2, B2,
	C3, Cs3, D3, Ds3, E3, F3, Fs3, G3, Gs3, A3, As3, B3,
	C4, Cs4, D4, Ds4, E4, F4, Fs4, G4, Gs4, A4, As4, B4,
	C5, Cs5, D5, Ds5, E5, F5, Fs5, G5, Gs5, A5, As5, B5, 
	C6

}
int main(){
	printf ("Raspberry Pi - MCP23017 Test\n");

	ChipUtility chips;

	chip.initChips(4); // using 4 chips
	
	//--------------------------------------
	//		MAD WORLD
	//---------------------------------------

	chips.triggerLED(F2, true);

	chips.triggerLED(Gs3, true);
	usleep(1000 * 300);
	chips.triggerLED(Gs3, false);

	chips.triggerLED(C4, true);
	usleep(1000 * 300);
	chips.triggerLED(C4, false);

	chips.triggerLED(G3, true);
	usleep(1000 * 300);
	chips.triggerLED(G3, false);

	chips.triggerLED(Gs3, true);

	usleep(1000 * 50);
	chips.triggerLED(F2, false);

	usleep(1000 * 200);
	chips.triggerLED(Gs3, false);

	chips.triggerLED(F3, true);
	chips.triggerLED(C3, true);
	chips.triggerLED(Gs2, true);

	usleep(1000 * 300);
	chips.triggerLED(F3, false);

	chips.triggerLED(G3, true);
	usleep(1000 * 300);
	chips.triggerLED(G3, false);

	chips.triggerLED(Ds3, true);
	usleep(1000 * 300);
	chips.triggerLED(Ds3, false);

	chips.triggerLED(D3, true);

	usleep(1000 * 50);
	chips.triggerLED(C3, false);
	chips.triggerLED(Gs2, false);

	usleep(1000 * 250);

	chips.triggerLED(As2, true);
	usleep(1000 * 1000);
	chips.triggerLED(D3, false);
	chips.triggerLED(As2, false);

	chips.triggerLED(D3, true);
	chips.triggerLED(F3, true);
	usleep(1000 * 1000);
	chips.triggerLED(D3, false);
	chips.triggerLED(F3, false);

//------------------------------------------------------

	chips.triggerLED(Gs3, true);

	usleep(1000 * 100);

	chips.triggerLED(F2, true);

	usleep(1000 * 200);
	chips.triggerLED(Gs3, false);

	chips.triggerLED(C4, true);
	usleep(1000 * 300);
	chips.triggerLED(C4, false);

	chips.triggerLED(G3, true);
	usleep(1000 * 300);
	chips.triggerLED(G3, false);

	chips.triggerLED(Gs3, true);

	usleep(1000 * 50);
	chips.triggerLED(F2, false);

	usleep(1000 * 200);
	chips.triggerLED(Gs3, false);

	chips.triggerLED(F3, true);
	chips.triggerLED(C3, true);
	chips.triggerLED(Gs2, true);

	usleep(1000 * 300);
	chips.triggerLED(F3, false);

	chips.triggerLED(G3, true);
	usleep(1000 * 300);
	chips.triggerLED(G3, false);

	chips.triggerLED(Gs3, true);
	usleep(1000 * 300);
	chips.triggerLED(Gs3, false);

	chips.triggerLED(Es3, true);

	usleep(1000 * 100);

	chips.triggerLED(C3, false);
	chips.triggerLED(Gs2, false);

	usleep(1000 * 200);
	chips.triggerLED(Es2, true);
	usleep(1000 * 1000);
	chips.triggerLED(Es2, false);

	chips.triggerLED(D3, true);
	chips.triggerLED(F3, true);
	usleep(1000 * 1000);
	chips.triggerLED(D3, false);
	chips.triggerLED(F3, false);

	chips.triggerLED(Es3, false);

	//------------------------------------

	chips.triggerLED(F2, true);
	usleep(1000 * 500);

	chips.triggerLED(F3, true);
	usleep(1000 * 300);
	chips.triggerLED(F3, false);

	usleep(1000 * 50);

	chips.triggerLED(F2, false);

	chips.triggerLED(F3, true);
	usleep(1000 * 300);
	chips.triggerLED(F3, false);

	chips.triggerLED(Gs3, true);
	chips.triggerLED(C3, true);
	chips.triggerLED(Gs2, true);

	usleep(1000 * 300);
	chips.triggerLED(Gs3, false);
	usleep(1000 * 50);
	chips.triggerLED(Gs3, true);
	usleep(1000 * 300);
	chips.triggerLED(Gs3, false);

	chips.triggerLED(F3, true);
	usleep(1000 * 300);
	chips.triggerLED(F3, false);

	usleep(1000 * 50);
	chips.triggerLED(C3, false);
	chips.triggerLED(Gs2, false);

	chips.triggerLED(F3, true);
	usleep(1000 * 300);
	chips.triggerLED(F3, false);

	chips.triggerLED(Gs2, true);

	chips.triggerLED(C4, true);
	usleep(1000 * 300);
	chips.triggerLED(C4, false);
	usleep(1000 * 50);
	
	chips.triggerLED(C4, true);
	usleep(1000 * 600);
	chips.triggerLED(C4, false);

	usleep(1000 * 150);

	chips.triggerLED(Gs2, false);

	chips.triggerLED(C4, true);
	usleep(1000 * 300);
	chips.triggerLED(C3, true);
	chips.triggerLED(Ds3, true);
	usleep(1000 * 300);
	chips.triggerLED(C4, false);

	chips.triggerLED(Gs3, true);
	usleep(1000 * 300);
	chips.triggerLED(Gs3, false);
	chips.triggerLED(C3, false);
	chips.triggerLED(Ds3, false);

	chips.triggerLED(As3, true);
	chips.triggerLED(Ds2, true);

	usleep(1000 * 300);
	chips.triggerLED(As3, false);

	usleep(1000 * 50);

	chips.triggerLED(As3, true);
	usleep(1000 * 500);
	chips.triggerLED(As3, false);
										// 20 seconds
	usleep(1000 * 150);
	chips.triggerLED(As3, true);
	chips.triggerLED(Ds2, false);

	usleep(1000 * 200);
	chips.triggerLED(As2, true);
	chips.triggerLED(G2, true);

	usleep(1000 * 300);
	chips.triggerLED(As3, false);

	chips.triggerLED(G3, true);
	usleep(1000 * 600);
	chips.triggerLED(G3, false);
	chips.triggerLED(As2, false);
	chips.triggerLED(G2, false);

	usleep(1000 * 100);

	chips.triggerLED(As2, true);

	chips.triggerLED(As3, true);
	usleep(1000 * 300);
	chips.triggerLED(As3, false);
	usleep(1000 * 50);

	chips.triggerLED(As3, true);
	usleep(1000 * 600);
	chips.triggerLED(As3, false);

	usleep(1000 * 150);

	chips.triggerLED(As2, false);
	chips.triggerLED(As3, true);

	usleep(1000 * 300);

	chips.triggerLED(D3, true);
	chips.triggerLED(F3, true);

	usleep(1000 * 300);

	chips.triggerLED(As3, false);

	chips.triggerLED(Es3, true);
	usleep(1000 * 300);
	chips.triggerLED(Es3, false);

	chips.triggerLED(D3, false);
	chips.triggerLED(F3, false);

	chips.triggerLED(G3, true);
	usleep(1000 * 600);
	chips.triggerLED(G3, false);

	chips.triggerLED(F3, true);
	usleep(1000 * 400);
	
	chips.triggerLED(F2, true);

	usleep(1000 * 600);
	chips.triggerLED(F3, false);
	usleep(1000 * 150);
	chips.triggerLED(F3, true);
	usleep(1000 * 300);
	chips.triggerLED(F3, false);
	chips.triggerLED(F3, true);
	usleep(1000 * 300);
	chips.triggerLED(F3, false);
	chips.triggerLED(F2, false);
								// 27 seconds
	chips.triggerLED(Gs2, true);
	chips.triggerLED(C3, true);

	chips.triggerLED(Gs3, true);
	usleep(1000 * 300);
	chips.triggerLED(Gs3, false);

	usleep(1000 * 50);

	chips.triggerLED(Gs3, true);
	usleep(1000 * 300);
	chips.triggerLED(Gs3, false);

	chips.triggerLED(F3, true);
	usleep(1000 * 300);
	chips.triggerLED(F3, false);

	usleep(1000 * 50);

	chips.triggerLED(Gs2, false);
	chips.triggerLED(C3, false);

	chips.triggerLED(F3, true);
	usleep(1000 * 300);
	chips.triggerLED(F3, false);

	chips.triggerLED(Gs2, true);

	chips.triggerLED(C4, true);
	usleep(1000 * 300);
	chips.triggerLED(C4, false);
	usleep(1000 * 50);
	chips.triggerLED(C4, true);
	usleep(1000 * 600);
	chips.triggerLED(C4, false);
	usleep(1000 * 150);

	chips.triggerLED(Gs2, false);
	chips.triggerLED(C4, true);
	usleep(1000 * 300);

	chips.triggerLED(C3, true);
	chips.triggerLED(Ds3, true);

	usleep(1000 * 300);
	chips.triggerLED(C4, false);
									// 30 seconds
	chips.triggerLED(Gs3, true);
	usleep(1000 * 600);
	chips.triggerLED(Gs3, false);

	chips.triggerLED(C3, false);
	chips.triggerLED(Ds3, false);

	return 0;
}
