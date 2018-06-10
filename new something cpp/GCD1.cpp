#include<stdio.h>
int main()
{
int temp,a,b;
scanf("%d",&b);
while(b!=0)
{
temp=b;
b=a%b;
a=temp;
}
printf("%d",temp);
return 0;
}
