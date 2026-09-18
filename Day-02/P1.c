#include<stdio.h>
int main(){
    printf("Enter length and breadth: ");
    int l, b;
    scanf("%d %d", &l, &b);
    printf("Area = %d, Perimeter = %d", l*b, 2*(l+b));
    return 0;}
