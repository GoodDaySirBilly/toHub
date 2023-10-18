#include "main.h"

int main(){
	positive = 0;
	negative = 0;
	printf("Enter 10 integer numbers with space or \\n\n");
	for(i = 0;i<10;i++){
		if(!scanf("%d",&num) || num > MAX || num < -MAX){
			printf("Please enter natural numbers <= 10000! Try again.");
			return 1;
		}
		array[i] = num;
		if(num>0) positive++;
		if(num<0) negative++;
	}
	
	printf("Changed array is \n[");
	for(i = 0;i<10;i++){
		if(positive > negative){
			if (array[i] < 0)array[i] = 0;
			else ;
		} else if (array[i] > 0) array[i] = 0;
		if(i==9) printf("%d",array[i]);
		else printf("%d, ",array[i]);
	}
	printf("]");
	return 0;
}

