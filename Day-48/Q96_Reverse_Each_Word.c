/* Question: Reverse each word in a sentence without changing the word order. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[300]; int i=0,start=0,end; fgets(s,300,stdin); while(1){ if(s[i]==' '||s[i]=='\n'||s[i]=='\0'){ end=i-1; while(start<end){ char t=s[start];s[start++]=s[end];s[end--]=t; } start=i+1; } if(s[i]=='\0') break; i++; } printf("%s",s); return 0; }
