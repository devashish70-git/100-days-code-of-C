#include<stdio.h>
int main(){
    char ch;
    scanf(" %c",&ch);
    if ((ch>='A' && ch<='B') || (ch>='a' && ch<='b')){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
}
    else{
        printf("not an alphsbet");
    }
    return 0;}