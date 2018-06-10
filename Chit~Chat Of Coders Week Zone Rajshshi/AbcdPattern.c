#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int i, j, n;
scanf("%d",&n);
for(i=n;i>=1;i--)
    {
for(j=1;j<=i;j++)
        {
printf("%c",'A'-1 + i+j);
        }
printf("\n");
    }
}
return 0;
}
