#include<stdio.h>
main()
{
int i,n,m;
m=0;
printf("\nEnter The Vaqlue Of N:");
scanf("%d",&n);
for(i=1;i<=10;i=i++)
{
m=m+n;
printf("%d*%d=%d\n",n,i,m);
}
return 0;

}
