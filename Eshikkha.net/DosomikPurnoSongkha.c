#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
float a,b,n;
scanf("%f %f",&n,&a);
b=(n-2*a)/2;
int m=a*b;
printf("%d\n",m);
}
return 0;
}
