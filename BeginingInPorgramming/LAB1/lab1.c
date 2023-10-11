#include <stdio.h>

int main(){
	float V;
	float v1;
	float v2;
	float t;
	
	printf("Please enter a positive number V:");
	scanf("%f", &V);
	printf("Please enter a positive number v1 = ");
	scanf("%f", &v1);
	printf("Please enter a positive number t = ");
	scanf("%f", &t);
		
	v2 = v1 - V/t;
	printf("v2 = %.2f\n",v2);
	return 0;
}