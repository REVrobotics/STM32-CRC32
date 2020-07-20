#ifndef __REV_CRC_h__
#define __REV_CRC_h__

#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

uint32_t crc32(uint32_t crc, const uint8_t* buffer, size_t size);

#ifdef __cplusplus
}
#endif

#endif
