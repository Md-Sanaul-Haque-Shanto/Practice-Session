#include <stdio.h>
#include<math.h>
int main ()
{
    int array[1000][1000];
    int i, j, n, b, a = 0, sum = 0;

    scanf("%d", &n);
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
