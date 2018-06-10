#include<stdio.h>
int main()

{
int c,m,m1=1,n,n1=1,f,f1,f2,fact,i,c1,c2=1;
scanf("%d %d",&n,&m);
c1=n-m;
for(f=1;f<=c1;f++)
    c2=c1*f;
for(f1=1;f1<=m;f1++)
m1=m1*f1;
for(f2=1;f2<=n;f2++)
n1=n1*f2;
c=n1/(n1*c2);
printf("%d",c2);
return 0;
}
