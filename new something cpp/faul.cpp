#include <stdio.h>
#include<math.h>

int main(void) {
long long t,b,a,n,s,cas=1;
scanf("%d",&t);
while(t--)
{
    scanf("%d %d",&a,&n);
   s=log(n)/log(b);
 printf("Case %d: %lld\n",cas,s);
     cas++;
}

	return 0;
}
