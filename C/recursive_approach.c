#include <stdio.h>

int BinarySearch(int arr[], int value, int start, int end)
{
    int mid = (start + end) / 2;

    if (arr[mid] == value)
        return mid; // return index if value found

    if (arr[mid] > value)
       return BinarySearch(arr, value, start, end = mid - 1);
    else
       return BinarySearch(arr,value, start = mid + 1, end);

    return -1; // if failed to find
}

int main()
{
    int a[] = {13, 26, 32, 43, 55, 67, 78, 83, 95, 100};

    printf("%d", BinarySearch(a, 67, 0, 9));
    return 0;
}
