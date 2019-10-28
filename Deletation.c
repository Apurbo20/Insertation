#include <stdio.h>

int main()
{
    int arr[7] = {23, 44, 13, 85, 8, 3, -34};
    int n = 7, item = 3;
    int i = 0, j = item;

    printf("Original array elements: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    while(j < n){
        arr[j] = arr[j + 1];
        j = j + 1;
    }

    printf("\n\nInserted array elements: \n");
    for(i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
