int insert(int[]);
int sum(int[],int);
void difference(int[],int);
#include<stdio.h>
void main()
{
int a[100],n,s;
n=insert(a);
s=sum(a,n);
if(s==0)
{
difference(a,n);
}}

