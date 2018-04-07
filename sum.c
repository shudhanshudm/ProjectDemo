#include<stdio.h>
int sum(int a[],int n)
{
int sume=0,sumo=0,i;
for(i=0;i<n;i++)
{
if(i%2==0)
{
sume=sume+a[i];
}
else
{
sumo=sumo+a[i];
}
}
if(sume>sumo)
{ return 1;}
else
{ return 0;}
}

