#include<stdio.h>

int main() {
   int a[30], i, num, smallest,largest,sum;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   //Read n elements in an array
   for (i = 0; i < num; i++)
      scanf("%d", &a[i]);

   //Consider first element as smallest
 //  smallest = num[0];

   for (i = 0; i < num; i++) {
      if (num[i] < smallest) {
         smallest = num[i];
      }
   }

  //  largest = num[0];

   for (i = 0; i < num; i++) {
      if (num[i] > largest) {
         largest = num[i];
      }
   }
   sum = smallest*largest;
   printf("\nSmallest Element : %d", smallest);

   return (0);
}
