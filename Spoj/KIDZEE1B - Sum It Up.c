#include<stdio.h>

int main()

{

     int testcase, i, x, y, z, sum;

     int caseno = 1;

     scanf("%d",&testcase);

     for(i = 1; i <= testcase; i++)

     {
     scanf("%d %d %d",&x,&y,&z);

          printf("Case %d: ", caseno);

          caseno++;

         sum=x+y+z;

          printf("Sum of %d, %d and %d is %d\n",x,y,z,sum);

     }

return 0;

}
