#include <wiringPi.h>
#include <mcp23017.h>
#include <unistd.h>

class ChipUtility
{
public:
	ChipUtility();
	void initChips(int numChips);
	void triggerLED(int ledNum, bool enable);
	void triggerAllLED();
	void clearAllLED();

private:
	int numLeds;
	int baseNumber;
	int pinsOnChip;
	int mic2mil = 1000;
};
