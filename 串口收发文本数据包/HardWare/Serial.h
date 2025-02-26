#ifndef __SERIAL_H
#define __SERIAL_H
#include <stdint.h>
#include <stdio.h>

extern char Serial_RxPacket[100];
extern uint8_t Serial_RxFlag;

void Serial_Init(void);
void Serial_SendByte(uint8_t Byte);

void Serial_SendString(char *String);


void Serial_Printf(char *format, ...);



#endif
