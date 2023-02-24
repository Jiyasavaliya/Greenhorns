#include<stdio.h>
#include<conio.h>

int main(){
	
	float celsius,fahrenheit;
	
	printf("temparature in celsius : ");
	scanf("%f", &celsius);
	
	fahrenheit = (1.8 * celsius) + 32;
	
	printf("temparature in celsius : %f", fahrenheit);
	return 0;
	
}
