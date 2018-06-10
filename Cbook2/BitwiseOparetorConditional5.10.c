#include<stdio.h>
int main()
{
int n=32;
int i,count=0,num;
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(num&(1<<i)) count++;
}
printf("Number Of 1:%d\n",count);
return 0;
}

