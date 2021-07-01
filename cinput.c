//cinput.c compile gcc cinput.c cinput.o 
#include <stdio.h>

int main(){
	char str [16]; //array of characters 
	int i; //integer i 
	
	printf("Enter a string : "); 
	scanf("%15s", str); 
	printf("Enter a hexadecimal number: "); 
	scanf("%x", &i);
	printf("Hexadecimale %#x ( %d ) \n",i,i); 
	
	return 0; 
}
