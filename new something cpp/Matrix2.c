#include <stdio.h>
#include<math.h>
#define n 10000
int main ()
{
    int n;
    scanf("%d", &n);
    int array[n][n];
    int i, j, b, a = 0, sum = 0;


    if (n == n )
    {
        for (i = 0; i < n; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &array[i][j]);
            }
        }

        for (i = 0; i < n; ++i)
        {
            sum = sum + array[i][i];
            a = a + array[i][n - i - 1];
        }
       b=sum-a;
       printf("%d",abs(b));
    }

        return 0;
}
