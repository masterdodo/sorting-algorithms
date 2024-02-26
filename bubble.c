#include <stdbool.h>

void sort_bubble(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool swap = false;

        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swap = true;
            }
        }

        if (!swap) {
            break;
        }
    }
}
