/* Question: Reverse a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[200]; int i,n=0; fgets(s,200,stdin); while(s[n]&&s[n]!='\n') n++; for(i=n-1;i>=0;i--) putchar(s[i]); return 0; }
