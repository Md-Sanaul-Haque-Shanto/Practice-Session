#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
double cel,far;
scanf("%lf",cel);
far=1.8*cel+32;
printf("%lf",far);
}
return 0;
}
