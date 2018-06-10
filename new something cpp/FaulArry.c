#include <stdio.h>
 int main()
 {
     int a,x,b;
     scanf("%d %d",&a,&b);
     x=a*a;
   if (x%b==0)
     {
         printf("Possible\n");
     }
    else {
        printf("Impossible\n");
     }
     return 0;
 }
