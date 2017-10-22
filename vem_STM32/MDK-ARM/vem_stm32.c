#include "vem_stm32.h"
uint8_t testTimer;
void AppInit(){
	testTimer = Timer16Alloc();
		StartTimer16(testTimer,100);
}

void AppCycle(){
		if(Timer16Stopp(testTimer)){
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
			StartTimer16(testTimer,20);
		}
}
