#include<stdio.h>
int main()
{
int l,i,u,sum=0;
printf("Enter Lower Number And Upper Number:");
scanf("%d %d",&l,&u);
for(i=l;i<=u;i++)
{
sum=sum+i;
}
printf("Summation Value IS:%d\n",sum);
return 0;
}



