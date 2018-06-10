#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
int bin,p,q,r,x;

bin=1;
q=0;
scanf("%d",&r);
while(q<r)
{
for(p=40-3*q;p>0;--p)
printf(" ");
for(x=0;x<=q;++x)
{
if((x==0)||(q==0))
bin=1;
else
bin=(bin*(q-x+1))/x;
printf("      ");
printf("%d",bin);
}

printf("\n\n\n");
++q;
}
}
return 0;
}
