#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int i,n,prime=1;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
        }
    }
    if(prime==1)
    {
        printf("Prime\n",n);
    }
    else
    {
        printf("Not Prime\n",n);
    }
    }
    return 0;
}
