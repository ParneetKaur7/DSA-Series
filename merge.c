#include <stdio.h>
#include <stdlib.h>
void print_arr(int n, int arr[]) {
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
}

void merge(int arr[], int l, int mid, int h) {
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int left[n1], right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        arr[k++] = (left[i] <= right[j]) ? left[i++] : right[j++];
    }

    while (i < n1) {
        arr[k++] = left[i++];
    }
    while (j < n2) {
        arr[k++] = right[j++];
    }
}

void mergesort(int arr[], int l, int h) {
    if (l < h) {
        int mid = (l + h) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    print_arr(n, arr);

    mergesort(arr, 0, n - 1);

    printf("Sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
