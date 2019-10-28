#include <stdio.h>

main ()
{
  int arr[8] = { 23, 44, 13, 85, 8, 3, -34 };
  int n = 7, item = 85;
  int i = 0;

  printf ("Original array elements: \n");
  for (i = 0; i < n; i++){
      printf ("%d ", arr[i]);
    }

  for (i = 0; i < n; i++){
      if (arr[i] == item){
	  printf ("\n\n%d is present at location: %d.\n", item, i + 1);
	  break;
      }
  }

  return 0;
}
