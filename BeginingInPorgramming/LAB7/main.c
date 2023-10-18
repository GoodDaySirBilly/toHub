#include <stdio.h>
unsigned long long num,mask,mask1,mask2;

int main(){
	printf("Enter positive num\n");
	if(!scanf("%I64u",&num)){
		printf("Num is incorrect. Please try again");
		return 1;
	}
	if(!num){
		printf("Binary symmetric");
		return 0;
	}
	mask = 0x8000000000000000;//2p63
	int len = 64;
	
	while((num&mask)==0){
		mask>>=1;
		len--;
	}
	
	mask1 = 1<<(len-1);
	mask2 = 1;
	
	for(int i =0; i<(len>>1);i++){
		if(((num&mask1)>0) != ((num&mask2)>0)){
			printf("Not binary symmetric");
			return 0;
		}
		mask2<<=1;
		mask1>>=1;
	}
	
	printf("Binary symmetric");
	return 0;
}