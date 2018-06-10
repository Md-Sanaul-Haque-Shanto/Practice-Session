#include<stdio.h>
int main()
{
int a,b,c,d,temp;
scanf("%d %d %d %d",&a,&b,&c,&d);

temp=a;
a=b;
b=c;
c=d;
d=temp;
printf("%d",temp);
printf("\n");
return 0;
}
