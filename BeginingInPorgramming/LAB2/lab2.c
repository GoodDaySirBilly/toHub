#include "lab2.h"

int main(){
	if((N = input()) == -1){
		return 1;
	}
	
	printf("sum of the first %d members of range is %f", N, naturalSum(N));
	return 0;
}

int input(){
	int num = 0;
	printf("Please enter natural number N:\n");
	scanf("%d", &num);
	if(num>0) return num;
	else{
		printf("Input is incorrect. Please try again.");
		return -1;
	}
}

float naturalSum(int N){
	float i = 1.;
	float sign = 1.;
	float sum = 0.;
	
	while(N>0){
		sum += sign*(i+2)/(i*(i+1));
		N--;
		i++;
		sign = -sign;
	}
	
	return sum;
}