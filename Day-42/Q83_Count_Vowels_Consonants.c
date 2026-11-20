/* Question: Count vowels and consonants in a string. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char s[200]; int v=0,c=0,i; fgets(s,200,stdin); for(i=0;s[i];i++){ char x=tolower(s[i]); if(x>='a'&&x<='z'){ if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') v++; else c++; }} printf("Vowels: %d\nConsonants: %d",v,c); return 0; }
