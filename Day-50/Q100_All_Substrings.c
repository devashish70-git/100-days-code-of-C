/* Question: Print all sub-strings of a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[100]; int i,j,k,n; scanf("%99s",s); n=strlen(s); for(i=0;i<n;i++) for(j=i;j<n;j++){ for(k=i;k<=j;k++) putchar(s[k]); putchar('\n'); } return 0; }
