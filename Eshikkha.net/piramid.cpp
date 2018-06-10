#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int i, j, k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("*");
        }
        for(k=1;k<(i*2);k++)
        {
                printf(" ");
        }
        printf("\n");
    }
    }
    return 0;
}

