#ifndef SOLOHM_H
#define SOLOHM_H 1

#include "../../libraries/Wire/Wire.h"

#include <stdint.h>

class SolOhm {
    public:
        SolOhm();
        void setup();
    private:
        void blah();
        void setRTCRegister(unsigned char registerNumber, unsigned char value);
        uint8_t getRTCRegister(unsigned char registerNumber);
}; 

#define VPANELSCALED    A2
#define IPANELSCALED    A1

#define V5SWENABLE      03

#define AMUXS0          05
#define AMUXS1          27
#define AMUXS2          28
#define AMUXOUT         A3

enum {
    DAYSENSORSCALED,
    VBATT1SCALED,
    VBATT2SCALED,
    VBATT3SCALED,
    V3P3SCALED,
    V5SWSCALED
};

#define ACTIVITYLED     29

#define THERMOCOUPLECS  19

#define IRRECEIVER      32

#define DISPLAYDC       30
#define DISPLAYCS       18
#define DISPLAYRESET    31

#define SDCD            17
#define SDCS            08

#define SPI_MOSI        15
#define SPI_MISO        14
#define SPI_CLK         07

#define I2C_SCL         09
#define I2C_SDA         10

#define BATTCHARGING     04
#define BATTCHARGEENABLE 13

/* from adafruit MCP4726 lib */
#define MCP4726_CMD_WRITEDAC            (0x40)  // Writes data to the DAC
#define MCP4726_CMD_WRITEDACEEPROM      (0x60)  // Writes data to the DAC and the EEPROM (persisting the assigned value after reset)

#define DACADDRESS 0x60




/* RTC defines */

// from https://github.com/sridharrajagopal/DSRTCLib
// indices within the rtc_bcd[] buffer

#define DSRTCLib_TR     0x10
#define DSRTCLib_SEC    0
#define DSRTCLib_MIN    1
#define DSRTCLib_HR 2
#define DSRTCLib_DOW    3
#define DSRTCLib_DATE     4
#define DSRTCLib_MTH    5
#define DSRTCLib_YR 6

#define DSRTCLib_BASE_YR        2000

#define DSRTCLib_CTRL_ID        B1101000

// Define register bit masks

#define DSRTCLib_CLOCKHALT  B10000000

#define DSRTCLib_LO_BCD     B00001111
#define DSRTCLib_HI_BCD     B11110000

#define DSRTCLib_HI_SEC     B01110000
#define DSRTCLib_HI_MIN     B01110000
#define DSRTCLib_HI_HR      B00110000
#define DSRTCLib_LO_DOW     B00000111
#define DSRTCLib_HI_DATE        B00110000
#define DSRTCLib_HI_MTH     B00110000
#define DSRTCLib_HI_YR      B11110000

#define DSRTCLib_ARLM1      0x07
#define DSRTCLib_ARLM1_LO_SEC   B00001111
#define DSRTCLib_ARLM1_HI_SEC   B01110000
#define DSRTCLib_ARLM1_LO_MIN   B01110000
#define DSRTCLib_ARLM1_HI_MIN   B00001111

#define DSRTCLib_SP         0x0E
#define DSRTCLib_SP_EOSC        B10000000
#define DSRTCLib_SP_RS2     B00010000
#define DSRTCLib_SP_RS1     B00001000
#define DSRTCLib_SP_INTCN       B00000100
#define DSRTCLib_SP_A2IE        B00000010
#define DSRTCLib_SP_A1IE        B00000001

#define DSRTCLib_STATUS     0x0F
#define DSRTCLib_STATUS_OSF B10000000
#define DSRTCLib_STATUS_A2F B00000010
#define DSRTCLib_STATUS_A1F B00000001





#endif