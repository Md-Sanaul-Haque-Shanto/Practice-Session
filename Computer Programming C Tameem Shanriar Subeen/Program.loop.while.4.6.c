#include<stdio.h>
main()
{
int n,sum;
int i;
int t,cas=1;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=1;i<=10;i++)

{

printf("%d*%d=%d\n",n,i,n*i);
}
printf("case %d:\n",cas);cas++;

}

return 0;}
