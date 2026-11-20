/* Question: Print the initials of a name. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[200]; int newword=1,i; fgets(s,200,stdin); for(i=0;s[i];i++){ if(!isspace(s[i])&&newword){ printf("%c.",toupper(s[i])); newword=0; } if(isspace(s[i])) newword=1; } return 0; }
