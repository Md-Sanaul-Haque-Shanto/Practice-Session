#include<stdio.h>
main()
{
int x=10,y;
int *p,*q;

p=&x;
y=*p;
*p=15;
*q=20;
printf("Value of X:%d\n",x);
printf("Value Of Y:%d\n",y);
printf("Value of *p:%d\n",*p);
printf("Value Of *q:%d\n",*q);
return 0;

}
