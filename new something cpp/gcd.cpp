#include<stdio.h>
main()
{
int t,a,b,x,gcd;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&a,&b);
if(a<b){
x=a;}
else{
x=b;
}
for(;x>=1;x--){
if(a%x==0&&b%x==0){
gcd=x;
break;
}}
printf("%d\n",gcd);
}
return 0;


}
