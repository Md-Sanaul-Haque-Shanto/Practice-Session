#include<stdio.h>
#include<string.h>
int main()
{
int a[100],b[100];
string s;
scanf("%d %s %d",&a,&s,&b);
if(s=="+")
printf("%d\n",a+b);
else if(s=="*")
printf("%d\n",a*b);

return 0;
}
