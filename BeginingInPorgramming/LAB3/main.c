#include "main.h"

int main(){
	count = 0;
	flag=0;	
	
	
	sym = getchar();
	while(sym!='\n'){
		
		who = whatIs(sym);
		if (flag == 0){
			if( who == 1) firstGlas = 1;
			if( who != 4) flag = 1;
		}
			
		if(flag == 1){
				if(who==3) firstGlas = 0;
				if(who == 4){
					flag = 0;
					if(firstGlas == 1) {
						count++; 
						firstGlas=0;
					}
				}
		}
		sym = getchar();
		if (sym == '\n'){
			who = 4;
			if(flag == 1){
				if(who==3) firstGlas = 0;
				if(who == 4){
					flag = 0;
					if(firstGlas == 1) {
						count++; 
						firstGlas=0;
					}
				}
			}
		}
		
	}
	printf("%d",count);
	return 0;
}

int whatIs(char s){
	if (s=='a'||s=='A'||s=='e'||s=='E'||s=='i'||s=='I'||s=='o'||s=='O'||s=='u'||s=='U'||s=='y'||s=='Y') return 1;
    else if (s=='1'||s=='2'||s=='3'||s=='4'||s=='5'||s=='6'||s=='7'||s=='8'||s=='9'||s=='0'||s=='`'\
		||s=='~'||s=='*'||s=='@'||s=='#'||s=='$'||s=='%'||s=='^'||s=='&'||s=='='||s=='+') return 3;
    else if (s== ' '||s=='\t'||s==';'||s==':'||s==','||s=='.'||s=='?'||s=='!'||s=='-' || s =='"'||s==39||s=='['\
		||s==']'||s=='{'||s=='}'||s=='('||s==')'||s=='/'||s=='<'||s=='>'||s=='\n'||s=='|') return 4;
    else return 2;
}