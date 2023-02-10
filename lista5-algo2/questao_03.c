#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void maiusculo(char *sPtr){
	
	for(int i=0;*sptr!='\0';i++){
		
		if(*sptr>=97&&*sPtr<=122){
			
			*sPtr-=32;
		}
		
		++sPtr;
	}
}

void main(){
	
	char rts[100];
	
	scanf("%[^\n]s",rts);
	
	if(rts[0]!='0'){
		
		maiusculo(rts);
		
		printf("%s\n",rts);
	}

}
