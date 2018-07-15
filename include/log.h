#ifndef __LOG_H__
#define __LOG_H__
#include "sys/types.h"

void print(const char *buffer);

void printx(uint32_t val);

void printxw(uint16_t val);

#endif