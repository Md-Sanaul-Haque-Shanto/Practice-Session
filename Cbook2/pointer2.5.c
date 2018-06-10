#include<stdio.h>
main()
{
int x=10;
int *p;
printf("value Of X:%d\n",x);
p=&x;
*p=20;
printf("Value Of X:%d\n",x);
x=15;
printf("vALUE oF x:%d\n",x);
printf("Value Of Stored At Location %p Is %d\n",p,*p);
printf("Address Of X :%p\n",&x);
printf("Value Of P:%p\n",p);
return 0;
}
