#include <stdint.h>

#ifndef IO_H
#define IO_H

#define KMI_KB_BASE 0x18000000
#define KMI_MS_BASE 0x19000000

typedef struct _KMI_MMIO {
    uint32_t cr;
    uint32_t stat;
    uint32_t data;
    uint32_t clk;
    uint32_t ir;
} KMI_MMIO;

void test();

#endif