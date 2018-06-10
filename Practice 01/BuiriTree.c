#include<stdio.h>
main()
{int x,i,n,total;
printf("\nEnter The Value Of:");
scanf("%d",&n);
x=3;
total=1;
for(i=1;i<=n;i++)
    total=total*3;
printf("Total Tree=%d",total);
return 0;
}
