#include<stdio.h>

int main()
{
   int a[1000], i, num, sum, largest, smallest;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   for (i = 0; i < num; i++)
      scanf("%d", &a[i]);
   largest = a[0];
   for (i = 0; i < num; i++) {
      if (a[i] > largest) {
         largest = a[i];
      }
   }
    smallest = a[0];

   for (i = 0; i < num; i++) {
      if (a[i] < smallest) {
         smallest = a[i];
      }
   }
   sum = largest*smallest;

   printf("%d",sum);

   return (0);
}
