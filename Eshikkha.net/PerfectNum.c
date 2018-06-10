#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
          sum=sum+i;
        }

    }
    if(sum==n)
    {
        printf("Yes\n",n);
    }
    else
    {
        printf("No\n",n);
    }
    }
    return 0;
}
