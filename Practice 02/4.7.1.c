#include<stdio.h>
main()
{int n,i;
printf("\nEnter The Value Of N:");
scanf("%d",&n);
for(i=1;i<=10;i=i++)
{printf("%d*%d=%d\n",i,n,n*i);}
return 0;
}
