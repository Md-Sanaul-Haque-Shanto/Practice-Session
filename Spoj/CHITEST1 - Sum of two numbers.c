#include<stdio.h>
int main(){
float t,a,b,sum;
scanf("%d",&t);
while(t--)
{
scanf("%f %f",&a,&b);
sum=a+b;
printf("%.1f\n",sum);
}
return 0;
}
