#pragma once
#include <wiringPi.h>
#include <mcp23017.h>

class ChipUtility
{
public:
	ChipUtility();
	initChips(int numChips);
	triggerLED(int ledNum, bool enable);

private:
	int numLeds;
};