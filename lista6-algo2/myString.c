#include <stdio.h>
#include "myString.h"

int i;

char *strcpy(char *destin, char *source){
	
	char *start = destin;

    while(*source != '\0'){
    	
        *destin = *source;
        destin=destin+1;
        source=source+1;
    }

    *destin = '\0';
    
    return start;
	
}

char *strncpy(char* dest, const char* src, unsigned int n){
	 
    if ((dest == NULL) &&(src == NULL))
    
        return NULL;
        
    char* start = dest;
    
    while (*src && n--){
    	
        *dest = *src;
        dest=dest+1;
        src=src+1;
    }
    
    *dest = '\0';
    return start;
	
}

char *strcat(char *dest, const char *src){
	
	int i;
    int j;

    for (i = 0; dest[i] != '\0'; i=i+1);
    
    for (j = 0; src[j] != '\0'; j=j+1){
    	
        dest[i+j] = src[j];
        
    }

    dest[i+j] = '\0';

    return dest;
	
}

char *strncat(char *s1, const char *s2, unsigned int n){
	
	if((s1 == NULL) && (s2 == NULL))
	
        return NULL;
    
    char *dest = s1;
    
    while(*dest != '\0'){
    	
        dest++;
    }
    
    
    while (n--){
    	
        if (!(*dest++ = *s2++)){
        	
            return s1;
        }
    }
    
    *dest = '\0';
    
    return s1;
	
}

int strcmp(char *s1, char *s2){
	
 int charCompareStatus = 0;
 
    while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 ){
    	
        s1++;
        s2++;
    }
  
    charCompareStatus = (*s1 ==*s2)?0:(*s1 >*s2)?1:-1;
    return charCompareStatus;
	
}

int strncmp(const char* s, const char* t, size_t n){
	
	char s1[100], s2[100];
	
 	for(i=0; i<n; i++){
 		
        if(s1[i] == s2[i]){
        	
            if(i==(n-1))
            
                return 0;
        }
        
        int a1 = (int) s1[i];
        int a2 = (int) s2[i];
        if(a1>a2)
        
            return 1;
            
        if(a2>a1)
        
            return -1;
    }
}
