#include<stdio.h>
#include<math.h>
int main()
{
int t,cas=1;
scanf("%d",&t);
while (t--)
{
double a,b,c,s,ans,anss;
scanf("%lf %lf %lf",&a,&b,&c);
s=(a+b+c)/2;
ans =s*((s-a)*(s-b)*(s-c));
anss=pow(ans,0.5);
printf("Case %d: %0.10lf\n",cas,anss);
cas++;
}
return 0;


}
