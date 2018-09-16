#include <stdio.h>
#include <stdlib.h>

int main() {
	
	unsigned int value = 3000000000;
	char *address = &value;
	printf("The value of my int is %x \n", value);	
	int size = sizeof(value);
	for(int ctr = 0; ctr < size; ctr++) {
		printf("Byte at position %d: %hhx \n", ctr, *address);
		address++;
	}
	for(int ctr = 0; ctr < size; ctr++) {
		*address++;
	}
	printf("New value after incrementing each byte by 1: %x \n", value);
	for(int ctr = 0; ctr < size; ctr++) {
		*address += 16;
	}
	printf("New value after incrementing each byte by 16: %x \n", value);
	return 0;
		
}