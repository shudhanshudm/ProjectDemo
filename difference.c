#include<stdio.h>
void difference(int a[],int n)
{int i,l,s;
l=a[0];
s=a[0];
for(i=0;i<n;i++)
{
if(l<a[i])
{
l=a[i];
}
if(s>a[i])
{
s=a[i];
}}
printf("diff is%d\n",(l-s));
}
