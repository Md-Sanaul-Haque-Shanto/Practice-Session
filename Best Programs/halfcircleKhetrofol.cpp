#include<stdio.h>
#include<math.h>
int main(void)
{
double d=10e100,n=10000000, x=0, A=0, r=d/2,h=d/n, c,y;
do{
x=x+h;
c=x-r;
y=sqrt(r*r-c*c);
A=A+y;
}
while(x<d-h);

printf("%.17f",2*A*h/(r*r));
return 0;

}
