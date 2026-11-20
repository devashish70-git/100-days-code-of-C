/* Question: Count spaces, digits, and special characters in a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[200]; int sp=0,d=0,sc=0,i; fgets(s,200,stdin); for(i=0;s[i];i++){ if(s[i]==' ') sp++; else if(isdigit(s[i])) d++; else if(!isalpha(s[i])&&s[i]!='\n') sc++; } printf("Spaces: %d\nDigits: %d\nSpecial: %d",sp,d,sc); return 0; }
