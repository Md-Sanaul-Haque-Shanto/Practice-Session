#include<stdio.h>
int main()
{
int s,n,fac=1,sum,pow;
printf("Enter a Serise End Number:");
scanf("%d",&n);

for(s=1;s<=n;s++)

    fac=fac*(s+1);
pow=n*n;
sum=pow*fac;
printf("Summation Is:%d\n",sum);
return 0;

}
