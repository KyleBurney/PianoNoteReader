#include "ChipUtility.h"

ChipUtility::ChipUtility()
{
	wiringPiSetup();
	numLeds = 0;
	baseNumber = 100;
	pinsOnChip = 16;
}

void ChipUtility::initChips(int numChips)
{
	mcp23017Setup(baseNumber, 0x20);
	mcp23017Setup(baseNumber + pinsOnChip, 0x24);
	mcp23017Setup(baseNumber + (pinsOnChip * 2), 0x27);
	mcp23017Setup(baseNumber + (pinsOnChip * 3), 0x22);

	for (int i = 0; i < numChips * pinsOnChip; i++)
	{
		pinMode(baseNumber + i, OUTPUT);
	}

	numLeds = numChips * 16;
}

void ChipUtility::triggerLED(int ledNum, bool enable)
{
	if (ledNum > 0 && ledNum < numLeds)
	{
		if (enable)
		{
			digitalWrite(baseNumber + ledNum, HIGH);
		}
		else
		{
			digitalWrite(baseNumber + ledNum, LOW);
		}
	}
} 

void ChipUtility::triggerAllLED()
{
	for(int i = 0; i < numLeds; i++){
               	 digitalWrite(baseNumber + i, HIGH);
				 usleep(mic2mil * 500);
				 digitalWrite(baseNumber + i, LOW);
        }
}


void ChipUtility::clearAllLED()
{
        for(int i = 0; i < numLeds; i++){
                 digitalWrite(baseNumber + i, LOW);
        }
}

