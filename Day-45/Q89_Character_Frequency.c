/* Question: Count frequency of a given character in a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[200],ch; int count=0,i; fgets(s,200,stdin); scanf(" %c",&ch); for(i=0;s[i];i++) if(s[i]==ch) count++; printf("%d",count); return 0; }
