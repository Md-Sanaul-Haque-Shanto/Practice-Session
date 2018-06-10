#include<stdio.h>
int main()
{
int ca,a,b,t,x,gcd;
scanf("%d",&ca);
while(ca--)
{
scanf("%d %d",&a,&b);
if(a==0) gcd=a;
else if(b==0) gcd=b;
else{

while(b!=0)
{
t=b;
b=a%b;
a=t;
}
gcd=a;
}
printf("%d\n",gcd);

}

return 0;

}
