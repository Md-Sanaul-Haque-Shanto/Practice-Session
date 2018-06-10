#include<stdio.h>
int main()
{
int t,i;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
int a,b,sum;
scanf("%d %d",&a,&b);

printf("Case:%d\n",i);
sum=a^b;
printf("Sum=%d\n",sum);
}
return 0;
}
