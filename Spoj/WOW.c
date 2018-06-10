#include <stdio.h>
int main()
{
int n, i;
while(scanf("%d", &n) == 1)
{
printf("W");
for(i = 1; i <= n; i++)
{
printf("o");
}
printf("w\n");
}
return 0;
}
