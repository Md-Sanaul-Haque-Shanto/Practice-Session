#include <stdio.h>
#include <math.h>

int main()
{
    int t,i,n,s;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s = pow((n*(n+1))/2,2);
 printf("case %d:%d\n",s);

}

    return 0;
}
