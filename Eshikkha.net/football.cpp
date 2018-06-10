#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
getchar();
while(t--)
{
char s[41];
int n;
scanf("%s %d",&s,&n);
if(n>=20)
{
printf("YES\n");
}
else if(n<20)
{
printf("NO\n");
}
}
return 0;
}
