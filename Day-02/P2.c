#include<stdio.h>
int main(){
    float R,C,A;
    printf("Enter radius of circle: ");
    scanf("%f",&R);
    C = 2 * 3.14 * R;
    A = 3.14 * R * R;
    printf("Area = %.2f, Circumference = %.2f ", A, C);
    return 0;}
