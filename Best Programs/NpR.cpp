#include<stdio.h>
int main()
{

int T,n,r,i,m,f=1,g=1,j;
scanf("%d",&T);
while(T--)
{


printf("Enter N and R Value:");
scanf("%d %d",&n,&r);
m=n-r;
for(i=1;i<=n;i++)
{
f=f*i;
}
for(j=1;j<=m;j++)
{
g=g*j;
}
printf("NpR Value Is %d\n",f/g);
}
return 0;
}
