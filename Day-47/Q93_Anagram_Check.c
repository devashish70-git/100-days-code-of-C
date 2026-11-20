/* Question: Check if two strings are anagrams of each other. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){ char a[200],b[200]; int f[256]={0},i; fgets(a,200,stdin); fgets(b,200,stdin); for(i=0;a[i];i++) if(!isspace(a[i])) f[(unsigned char)a[i]]++; for(i=0;b[i];i++) if(!isspace(b[i])) f[(unsigned char)b[i]]--; for(i=0;i<256;i++) if(f[i]){printf("Not Anagrams");return 0;} printf("Anagrams"); return 0; }
