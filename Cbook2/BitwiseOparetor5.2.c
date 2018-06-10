#include<stdio.h>
int main()
{
int n,x,m;
while(1)
{
printf("Please Enter Your Number(0 to exist):");
scanf("%d",&n);
if(n==0)
{
break;
}
printf("How Many Bits You Want To shift Lefts?");
scanf("%d",&x);
m=n<<x;
printf("Result Is %d\n\n",m);
}
return 0;
}
