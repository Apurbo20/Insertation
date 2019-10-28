#include <stdio.h>

int main()
{
    int arr[10] = {23, 44, 13, 85, 8, 3, 34};
    int n = 7, k = 3, item = 10;
    int i=0, j = n;

    printf("Original array alements: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    while(j  >= k){
        arr[j + 1] = arr[j];
        j = j - 1;
    }

    arr[k] = item;
    n=n+1;
    printf("\n\nInserted array alements: \n");
    for(i = 0; i <n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
