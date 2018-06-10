#include<stdio.h>
main()
{
char c='A';
char *p;
p=&c;
printf("Address Of C:%p\n",p);
printf("Address Of p:%p\n",&p);
return 0;

}
