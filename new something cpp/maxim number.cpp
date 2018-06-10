#include<stdio.h>

int main()
{
int cn,i,max,a,b,c;
scanf("%d",&cn);
if(cn >=1 && cn<=100)
{
for(i=1; i<=cn; i++)
{
scanf("%d %d %d",&a,&b,&c);
if(a<=200 && b<=200 && c<=200)
{
max = (a>b && a>c)?a:b>c?b:c;
printf("Csse %d: %d\n",i,max);
}
}
}
return 0;
}
