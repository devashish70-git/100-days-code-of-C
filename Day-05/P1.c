#include<stdio.h>
#include<math.h>
int main(){
    int P, R, T, SI;
    float CI;
    scanf("%d %d %d", &P, &R, &T);
    SI = (P * R * T) / 100;
    CI = P * (pow((1 + R / 100.0), T)) - P;
    printf("Simple Interest=%d , Compound Interest=%0.1f", SI, CI);
    return 0;
}