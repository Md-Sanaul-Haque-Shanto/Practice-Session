#include<stdio.h>
int main()
{
int ca,a,b,t,x,gcd;
scanf("%d",&ca);
while(ca--)
{
scanf("%d %d",&a,&b);
if(a>b)
x=a;
else x=b;
again:
if(x%a==0 && x%b==0)
printf("%d\n",x);
else
{
x=x+1;
goto again;
}
return 0;
}
