#include <stdio.h>
#include<math.h>
int main()

{
int t;
scanf("%d",&t);
while(t--)
{

double area,a,b;
int n;
scanf("%lf %lf",&a,&b);
area=(( 3.1416*b)/180)*a;
n = int(area);
printf("%d\n",n);
}
return 0;
}
