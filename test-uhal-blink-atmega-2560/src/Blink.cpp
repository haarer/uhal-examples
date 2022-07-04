#include "HAL/HAL.h"
using namespace UHAL;

static const GenericCPU<AVR_ATmega2560, PKG_TQFP100> cpu;

int main(void)
{
    cpu.pins.pb7.modeOut();
    while (1)
    {
        cpu.delay(990);
        cpu.pins.pb7.writeHigh();
        cpu.delay(10);
        cpu.pins.pb7.writeLow();
    }

    return 0;
}