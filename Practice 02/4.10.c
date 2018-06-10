#include<stdio.h>
main()
{int n,i;
printf("\nEnter The Value Of N:");
scanf("%d",&n);
for(n=1;n<=20;n=n++)
{for(i=1;i<=10;i=i++);
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}
