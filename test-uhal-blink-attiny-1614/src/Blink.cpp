#include <avr/io.h>
#include "HAL/HAL.h"
using namespace UHAL;

static const GenericCPU<AVR_ATtiny1614, PKG_SO14> cpu;

int main(void)
{
    // no clock divider abstraction in uhal yet :)
    CCP = CCP_IOREG_gc;
    CLKCTRL.MCLKCTRLB = 0;
    cpu.pins.pa4.modeOut();
    while (1)
    {
        cpu.delay(990);
        cpu.pins.pa4.writeHigh();
        cpu.delay(10);
        cpu.pins.pa4.writeLow();
    }

    return 0;
}