#include <stdio.h>

int main()
{
   int array[7] = {8, 12, 14, 17, 23, 33, 43};
   int item = 8;
   int first, last, middle, n=6;

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < item)
         first = middle + 1;
      else if (array[middle] == item) {
         printf("%d found at location %d.\n", item, middle+1);
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", item);

   return 0;
}
