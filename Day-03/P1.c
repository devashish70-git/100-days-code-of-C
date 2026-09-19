#include<stdio.h>
int main(){
    float Cel,Far ;
    printf("Enter temprature in celsius: ");
    scanf("%f", &Cel);
    Far= Cel*(9/5.0)+32;
    printf("Fahrenheit=%.0f", Far);
    return 0;
}