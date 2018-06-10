#include<stdio.h>
main()
{int n,i;
printf("\nEnter The vALUE oF N:");
scanf("%d",&n);
for(;;)
{
printf("%d*%d=%d\n",n,i,n*i);
i=i++;
if(i>10)
{break;}
}
return 0;
}
