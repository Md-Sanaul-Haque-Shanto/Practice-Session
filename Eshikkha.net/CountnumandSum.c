#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,d1,d2,sum;
scanf("%d",&n);
d1=n%10;
d2=n/10;
sum=d1+d2;

printf("%d\n",sum);
}
return 0;

}
