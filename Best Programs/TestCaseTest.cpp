#include <stdio.h>

int main()
{
     int t,i,n,s,cas=1;
 scanf("%d",&t);
  while(t--)
  {
       scanf("%d %d %d",&n,&t,&i);
       s=n+t+i;
    printf("%d: %d\n",cas,s);
     cas++;
     }
      return 0; }
