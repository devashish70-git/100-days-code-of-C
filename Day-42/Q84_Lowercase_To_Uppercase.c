/* Question: Convert a lowercase string to uppercase without using built-in functions. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[200]; int i; fgets(s,200,stdin); for(i=0;s[i];i++) if(s[i]>='a'&&s[i]<='z') s[i]-=32; printf("%s",s); return 0; }
