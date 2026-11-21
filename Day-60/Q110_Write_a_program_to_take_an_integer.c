/* Question: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){int n,k,a[100],i,j,m;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);for(i=0;i<=n-k;i++){m=a[i];for(j=i+1;j<i+k;j++)if(a[j]>m)m=a[j];printf("%d ",m);}return 0;}
