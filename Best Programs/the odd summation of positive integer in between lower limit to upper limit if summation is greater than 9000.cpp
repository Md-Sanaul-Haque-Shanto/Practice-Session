#include<stdio.h>
int main()
{
int i,l,u,sum=0;
printf("Enter Lower Number And Upper Number:");
scanf("%d %d",&l,&u);
for(i=l;i<=u;i++)
{
if(i%2==0)
{
sum=sum+i;
}
}
if(sum>9000)
{
printf("Summation Value Is:%d\n",sum);
}
return 0;

}
