#include<stdio.h>
main()
{int a,b,x,gdc;
    printf("\nEnter The Value Of 2Numbers:");
scanf("%d %d",&a,&b);
if(a<b)
{
    x=a;
    }
else
{
    x=b;
}
for(x=1;x>=1;x--)
{
if(a%x==0 && b&x==0)
{
gdc=x;
break;
}
}
printf("GDC Is:%d",gdc);
return 0;
}
