#include<stdio.h>
int main()
{
int i,n,prime=1;
printf("enter A number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
prime=0;
}
}
if(prime==1)
{
printf("The Number Is Prime\n");
}
else
{
printf("The Number Is Not Prime\n");
}

return 0;
}
