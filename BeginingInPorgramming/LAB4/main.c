#include "main.h"

int main(){
	//init
	i=0;
	flag = false;
	base=false;
	len = 1000;
	N=10000;
	char line[len];
	
	//input
	printf("enter natural number n(default n = 10000), string:\n");
	int boo = scanf("%d\n",&N);
	if(!boo){
		printf("Please try again and enter natural number!\n");
		return 0;
	}
	
	gets(line);
	
	//working
	while(line[i] != '\0'){
		type = whatIs(line[i]);
		
		if(flag == false){
			if( type == 1){
				count = 1;
				flag = true;
			}else if(type ==2){
				count = -1000;
				flag = true;
			}
			start = i;
			
		}else{
			if(type == 1){
				count++;
			} else if(type == 2){
				count = -1000;
			} else{
				fin = i-1;
				b = fin;
				if(count > N){
					//deleting
					while((b-start+1)!=0)
					{
						b--;
						for(int k = start;k<len;k++){
							line[k]=line[k+1];
						}
						len--;
					}
					i = i -(fin -start+1);
				}
				flag = false;
				count = 0;			
			}
		}
		i++;
		if(line[i]=='\0' && base == false){
			line[i] = ' ';
			line[i+1]= '\0';
			base = true;
		}
	}
	
	//output
	puts(line);
	return 0;
}


int whatIs(char s){
	if (s=='1'||s=='2'||s=='3'||s=='4'||s=='5'||s=='6'||s=='7'||s=='8'||s=='9'||s=='0'||s=='`'\
		||s=='~'||s=='*'||s=='@'||s=='#'||s=='$'||s=='%'||s=='^'||s=='&'||s=='='||s=='+') return 2;
    else if (s== ' '||s=='\t'||s==';'||s==':'||s==','||s=='.'||s=='?'||s=='!'||s=='-' || s =='"'||s==39||s=='['\
		||s==']'||s=='{'||s=='}'||s=='('||s==')'||s=='/'||s=='<'||s=='>'||s=='|') return 3;
    else return 1;
}