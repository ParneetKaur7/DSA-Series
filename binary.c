#include<stdio.h>
int binary_search(int arr[], int low, int high, int element) {
    while(low<=high) {
    int mid= (low+ high)/2;
    if(arr[mid]==element) {
        return mid;
    }
    else if(element<arr[mid]) {
        high= mid-1;
        binary_search(arr, low, high, element);
    }
    else{
        low= mid+1;
        binary_search(arr, low, high, element);
    }
    }
    return -1;
}
int main()
{
    int n, low, high, mid, element;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        printf("enter elements of array:");
    scanf("%d", &arr[i]);
    }
    printf("enter element to be searched:");
    scanf("%d", &element);
    low=0;
    high= n-1;
    mid= binary_search(arr, low, high, element);
    if(mid==-1) {
        printf("element not found");
    }
    else{
    printf("element found at index:%d", mid);
    }
    return 0;
}