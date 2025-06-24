#include <iostream>
using namespace std;

void merge(int arr[], int s, int mid, int e)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
        first[i] = arr[mainArrayIndex++];

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
        second[i] = arr[mainArrayIndex++];

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergesort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int mid = s + ((e - s) / 2);
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}

int main()
{
    int arr[] = {6, 3, 9, 6, 2, 8};
    int size = sizeof(arr) / sizeof(int);

    mergesort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}