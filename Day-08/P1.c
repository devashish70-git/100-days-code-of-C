#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z'){
        printf("UPPERCASE");
    }
    else if(ch>='a' && ch<='z') {
        printf("LOWERCASE");}
    else if(ch>='0' && ch<='9'){
        printf("DIGIT");
    }
    else{
        printf("Special character");
    }
}