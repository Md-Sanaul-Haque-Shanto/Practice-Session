#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int i,n,s=1,nam;
scanf("%d",&n);

s++;
for(i=1;i<=10;i=i+1){
nam=n*i;
printf("Case %d:\n",s);
printf("%d*%d=%d\n",n,i,nam);}

}

return 0;
}
