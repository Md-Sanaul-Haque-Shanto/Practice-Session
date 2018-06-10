#include<stdio.h>
main()
{
int x=10;
int y;
int *p;
printf("Value Of X:%d\n",x);
p=&x;
y=*p;
*p=15;
printf("Value Of X:%d\n",x);
printf("Value Of Y:%d\n",y);
printf("Value Of *P:%d\n",*p);
printf("Address Of X:%p\n",&x);
printf("Address Of Y:%p\n",&y);
printf("Value Of p:%p\n",p);
return 0;


}
