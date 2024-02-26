void sort_selection(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int current_min_idx = i;
        int current_min = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < current_min) {
                current_min_idx = j;
                current_min = arr[j];
            }
        }
        int temp = arr[i];
        arr[i] = current_min;
        arr[current_min_idx] = temp;
    }
}
