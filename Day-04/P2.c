#include<stdio.h>
int main(){
    int n, s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    s = n*(n+1)/2;
    printf("sum = %d", s);
    return 0;}