#include<stdio.h>
main()
{
int x=10;
int*p;
p=&x;
printf("Value Of X:%d\n",x);

*p=20;
printf("Value Of X;%d\n",x);
printf("Address O X:%p\n",&x);
printf("Value Of P:%p\n",p);
return 0;

}
