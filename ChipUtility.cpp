#include "ChipUtility.h"

ChipUtility::ChipUtility()
{
	wiringPiSetup();
	numLeds = 0;
}

void ChipUtility::initChips(int numChips)
{
	mcp23017Setup(100, 0x20);
	mcp23017Setup(116, 0x24);
	mcp23017Setup(132, 0x27);
	mcp23017Setup(148, 0x22);

	for (int i = 0; i < numChips * 16; i++)
	{
		pinMode(100 + i, OUTPUT);
	}

	numLeds = numChips * 16;
}

void ChipUtility::triggerLED(int ledNum, bool enable)
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

void ChipUtility::triggerAllLED()
{
	for(int i = 0; i < 64; i++){
               	 digitalWrite(100 + i, HIGH);
        }
}


void ChipUtility::clearAllLED()
{
        for(int i = 0; i < 64; i++){
                 digitalWrite(100 + i, LOW);
        }
}

