#include <stdint.h>
#include <stdio.h>

#include "stm_crc32.h"

int main() {
    
	// Values read straight from STM32 CRC32
    uint8_t vals[] = {0x0, 0x2B, 0x02, 0xD1, 0x3B};
	
	// STM32 calculated result
    uint8_t result[] = {237, 198, 46, 201};
    
    printf("Generated CRC: %08x\r\n", crc32(0xFFFFFFFF, vals, 5));
    printf("\r\nExpected  CRC: %08x\r\n", *((uint32_t*)result));
    return 0;
}
