#include<stdio.h>
int insert(int a[])
{
int n,i,m=0;
printf("enter the size of array\n");
scanf("%d",&n);
printf("eneter elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
m=m+1;
}
return m;
}

