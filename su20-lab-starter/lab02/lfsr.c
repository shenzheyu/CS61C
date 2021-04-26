#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */

    uint16_t bit_0 = (*reg << 15) >> 15;
    uint16_t bit_2 = (*reg << 13) >> 15;
    uint16_t bit_3 = (*reg << 12) >> 15;
    uint16_t bit_5 = (*reg << 10) >> 15;

    *reg = *reg >> 1;
    *reg = *reg | ((((bit_0 ^ bit_2) ^ bit_3) ^ bit_5) << 15);

}

