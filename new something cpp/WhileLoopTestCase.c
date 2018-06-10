#include<stdio.h>
int main()
{
int t,cas=1;
scanf("%d",&t);
while(t--)
{
int a,b,sum;
scanf("%d %d",&a,&b);
sum=a+b;
printf("Case %d:%d\n",cas,sum);
cas++;
}
return 0;
}
