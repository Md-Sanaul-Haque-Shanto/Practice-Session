#include<stdio.h>
main()
{
char c='A';
char *p,**q;
p=&c;
q=&p;
printf("Value Of C:%c\n",c);
printf("Value of c:%c\n",*p);
printf("Value Of C:%c\n",**q);
return 0;
}
