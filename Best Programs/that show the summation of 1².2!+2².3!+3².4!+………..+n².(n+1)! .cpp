#include<stdi.h>
{
int f,m,i,j,n,sum=0,sum1,sum2=0;
printf("Enter The Serise Number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
m=i+1;
f=1;
for(j=1;j<=m;j++)
{
f=f*j;
}
sum1=i*i*j;
sum2=sum2+sum1;
}
printf("Summation Is:%d",sum);
return 0;

}
