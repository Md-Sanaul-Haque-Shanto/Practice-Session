#include<stdio.h>
main()
{int i,n,sum;
sum=0;
printf("\nEnter The Value Of Range:");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
sum=sum+i;
printf("\nThe Summation Is:%d",sum);
return 0;
}
