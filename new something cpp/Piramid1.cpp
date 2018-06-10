#include <stdio.h>
int main()
{
    int t,cas=0,i,j,n;
   scanf("%d",&t);
   while(t--)
   {
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("Case %d:%d",cas,j);cas++;
        }
        printf("\n");
    }}
    return 0;
}
