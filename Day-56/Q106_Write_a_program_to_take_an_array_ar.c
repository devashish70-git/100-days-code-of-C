/* Question: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){int n,a[100],i,j,ans;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++){ans=-1;for(j=i+1;j<n;j++)if(a[j]>a[i]){ans=a[j];break;}printf("%d",ans);if(i<n-1)printf(", ");}return 0;}
