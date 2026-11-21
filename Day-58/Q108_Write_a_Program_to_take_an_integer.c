/* Question: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){int n,a[100],i,j,product;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++){product=1;for(j=0;j<n;j++)if(i!=j)product*=a[j];printf("%d ",product);}return 0;}
