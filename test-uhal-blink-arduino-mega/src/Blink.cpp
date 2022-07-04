#include "HAL/HAL.h"
#include "HAL/HAL_Board.h"
using namespace UHAL;
GenericBoard<ArduinoMega2560> board;
int main(void)
{
	board.pin13.modeOut();
	while (1)
	{
		board.pin13.writeHigh();
		board.cpu.delay(100);
		board.pin13.writeLow();
		board.cpu.delay(100);
	}
}