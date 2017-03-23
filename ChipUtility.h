#include <wiringPi.h>
#include <mcp23017.h>

class ChipUtility
{
public:
	ChipUtility();
	void initChips(int numChips);
	void triggerLED(int ledNum, bool enable);

private:
	int numLeds;
};
