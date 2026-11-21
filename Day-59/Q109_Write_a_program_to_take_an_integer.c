/* Question: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){int n,k,a[100],i,j,sum,best;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);best=-2147483647;for(i=0;i<=n-k;i++){sum=0;for(j=i;j<i+k;j++)sum+=a[j];if(sum>best)best=sum;}printf("%d",best);return 0;}
