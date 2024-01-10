#include <stdio.h>

int BinarySearch(int arr[], int array_size, int value)
{
    int start = 0, end = array_size-1;
    int mid = (start + end)/2;

    while(start <= end)
    {
        //we can explicitly check start and end too

        if(arr[mid] == value)
            return mid; // return index if value found
        
        if(arr[mid] > value)
            end = mid - 1;
        else
            start = mid + 1;

        mid = (start + end)/2;
    }
    return -1;  // if failed to find
}

int main()
{
    int a[] = {13,26,32,43,55,67,78,83,95,100};

    printf("%d",BinarySearch(a, 10, 26));
    return 0;
}
