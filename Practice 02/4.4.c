#include<stdio.h>
main()
{ int n=0;
printf("\nEnter The N Value:");
scanf("%d",&n);

while(n<100)
{
n=n+1;
if(n%2==0)
{
continue;
}
printf("%d\n",n);
}
return 0;
}
