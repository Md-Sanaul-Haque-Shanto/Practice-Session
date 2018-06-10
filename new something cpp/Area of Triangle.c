#include<stdio.h>
#include<math.h>
main()
{
int a,b,c;
float s,ans,anss;

printf("Enter The a b c:");
scanf("%d %d %d",&a,&b,&c);
s=(a+b+c)/2;
ans =s*((s-a)*(s-b)*(s-c));
anss=pow(ans,0.5);
printf("The %f",anss);
return 0;


}
