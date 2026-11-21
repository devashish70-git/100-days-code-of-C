/* Question: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){int n,a[100],x,i,first=-1,last=-1;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(i=0;i<n;i++)if(a[i]==x){if(first==-1)first=i;last=i;}if(first==-1)printf("-1 -1");else printf("%d %d",first,last);return 0;}
