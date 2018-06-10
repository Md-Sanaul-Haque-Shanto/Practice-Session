#include<stdio.h>
int main()
{
double a,b,res;
int z,x;
scanf("%d",&z);

for(x = 1; x<=z; x++)
{
	scanf("%lf",&a);
	b = 0.621371;

	res = a*b;
	printf("%.10f",res);
}
}
