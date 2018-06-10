#include<stdio.h>
main()
{
double pi=3.14159265358;
double *ptr;
ptr=&pi;
printf("Value Of Pi:%lf\n",pi);
printf("Value Of pi:%lf\n",*ptr);
return 0;

}
