#include <iostream>
#include <iomanip>
#include <stdint.h>

#include "stm_crc32.h"

int main() {
    std::cout << std::setfill('0') << std::setw(8) << std::hex;
    
	// Values read straight from STM32 CRC32
    uint8_t vals[] = {0x0, 0x2B, 0x02, 0xD1, 0x3B};
	
	// STM32 calculated result
    uint8_t result[] = {237, 198, 46, 201};
    
    std::cout << "\r\nGenerated CRC: "  << crc32(0xFFFFFFFF, vals, 5) << std::endl;
    std::cout << "\r\nExpected  CRC: " << *((uint32_t*)result) << std::endl;
    return 0;
}
