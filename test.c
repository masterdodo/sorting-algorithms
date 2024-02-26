#include <stdio.h>

#include "bubble.h"
#include "selection.h"
#include "insertion.h"

void setRandomArr(int arr[])
{
    arr[0] = 8;
    arr[1] = 4;
    arr[2] = 5;
    arr[3] = 7;
    arr[4] = 2;
    arr[5] = 4;
    arr[6] = 9;
    arr[7] = 3;
    arr[8] = 1;
    arr[9] = 6;
}

void printArr(int arr[], int n)
{
    printf("Arr: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void array_sort(int arr[], int arr_len, void (*sort_func)(int[], int))
{
    setRandomArr(arr);
    printArr(arr, arr_len);

    sort_func(arr, arr_len);

    printArr(arr, arr_len);
}

void bubble(int arr[], int arr_len)
{
    array_sort(arr, arr_len, sort_bubble);
}

void selection(int arr[], int arr_len)
{
    array_sort(arr, arr_len, sort_selection);
}

void insertion(int arr[], int arr_len)
{
    array_sort(arr, arr_len, sort_insertion);
}

int main(void)
{
    int arr[] = {8, 4, 5, 7, 2, 4, 9, 3, 1, 6};
    int arr_len = 10;

    // Bubble Sort
    printf(" --- Bubble Sort --- \n");
    bubble(arr, arr_len);
    // Selection Sort
    printf(" --- Selection Sort --- \n");
    selection(arr, arr_len);
    // Insertion Sort
    printf(" --- Insertion Sort --- \n");
    insertion(arr, arr_len);

    return 0;
}
