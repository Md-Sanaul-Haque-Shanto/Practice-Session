#include<stdio.h>

int main()
{
int t,num,i,j;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
scanf("%d",&num);
printf("Case:%d",i);
for(j=1;j<=num;j++)
{
    for(j=1;j<=10;j++)
printf("%d*%d=%d\n",j,num,j*num);
}
printf("");
}
return 0;

}
