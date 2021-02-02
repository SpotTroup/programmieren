#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(void){
	int zahl = 23;
	unsigned int msb;
	int num_bits = sizeof(unsigned int) * 8;
	printf("%d\n", num_bits);
	
	msb = 1 << (num_bits - 1);  //-> 31
	printf("msb = %u\n", msb-1);
	
	if (msb & zahl != 0)
    	printf ("zahl = %d, MSB gesetzt", zahl);	
	else
	    printf ("zahl = %d, MSB nicht gesetzt", zahl);
	
	return 0;
}