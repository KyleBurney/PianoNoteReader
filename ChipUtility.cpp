#include "ChipUtility.h"

ChipUtility::ChipUtility()
{
	wiringPiSetup();
	numLeds = 0;
}

ChipUtility::initChips(int numChips)
{
	for (int i = 0; i < numChips; i++)
	{
		mcp23017Setup(100 + (i * 100), 0x20 + (i * 16)); // change to correct address
	}

	for (int i = 0; i < numChips * 16; i++)
	{
		pinMode(100 + i, OUTPUT);
	}

	numLeds = numChips * 16;
}

ChipUtility::triggerLED(int ledNum, bool enable)
{
	if (ledNum > 0 && ledNum < numLeds)
	{
		if (enable)
		{
			digitalWrite(100 + ledNum, HIGH);
		}
		else
		{
			digitalWrite(100 + ledNum, LOW);
		}
	}
}
