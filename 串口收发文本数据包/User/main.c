#include "stm32f10x.h"                  // Device header
#include "Delay.h"

#include "Serial.h"

#include <string.h>


int main(void){
	

	Serial_Init();
	

	while(1){
		if(Serial_RxFlag == 1){

			
			if(strcmp(Serial_RxPacket,"T+OK?") == 0){

				Serial_SendString("OK\r\n");

			}
			else if(strcmp(Serial_RxPacket,"T+1") == 0){
			
				Serial_SendString("111\r\n");
				
			}
			else{
				Serial_SendString("ERROR_COMMAND\r\n");
				
			}
			
			Serial_RxFlag = 0;
		}
	}
}

