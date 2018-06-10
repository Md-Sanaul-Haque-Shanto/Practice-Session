#include<stdio.h>
int main()
{
    int t,m;

    scanf("%d",&t);

    for(m=1;m<=t;m++)
    {

        int i,n,nam;

        scanf("%d",&n);

         printf("Case %d:\n",m);

        for(i=1;i<=10;i++)
        {

            printf("%d * %d = %d\n",n,i,i*n);
        }
    }
  return 0;
}




