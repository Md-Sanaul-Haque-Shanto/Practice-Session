#include<stdio.h>
int main()
{
int t,i,n,fact=1;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("%d\n",fact);
}
return 0;
}
