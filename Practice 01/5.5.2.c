#include<stdio.h>
main()
{int i,n,sum;
sum=0;
printf("Enter The Value Is N:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+i;
}
printf("Summation Is:%d\n",sum);
return 0;
}
