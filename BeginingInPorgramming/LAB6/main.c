#include "main.h"

int main(){
	//array[i][j] = array [col][line] 
	//input
	
	printf("Please enter num of lines and num of columns\n");
	if(!scanf("%d",&K) || K > MAX || K < -MAX ){
		printf("Please enter correct integer numbers and try again");
		return 1;
	}
	
	if(!scanf("%d",&N) || N > MAX || N < -MAX ){
		printf("Please enter correct integer numbers and try again");
		return 1;
	}
	
	int array[K][N];
	printf("Please enter array\n");
	for(i=0;i<K;i++){
		for(j=0;j<N;j++){
			if(!scanf("%d",&array[i][j]) || array[i][j] > MAX || array[i][j] < -MAX ){
				printf("Please enter correct integer numbers and try again");
				return 1;
			}
		}
	}
	printf("------------------------------");
	
	//working
	min = MAX;
	for(i=0;i<K;i++){
		for(j=0;j<N;j++){
			if(min>array[i][j]){
			    min = array[i][j];
				line = j;
				column = i;
			}
		}
	}
	
	//output
	for(i=0;i<K;i++){
		printf("\n");
		for(j=0;j<N;j++){
			if(j == line || i == column){
				array[i][j] = 0;
			}
			printf("%4d ",array[i][j]);
		}
	}
	
	//VLA C99
	return 0;
}