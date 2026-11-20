/* Question: Find the longest word in a sentence. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[300],word[100]={0}; int i=0,j=0,best=0; fgets(s,300,stdin); while(1){ if(s[i] && !isspace(s[i])) word[j++]=s[i]; else { if(j>best){word[j]='\0'; best=j; printf("");} j=0; } if(!s[i]) break; i++; } printf("%s",word); return 0; }
