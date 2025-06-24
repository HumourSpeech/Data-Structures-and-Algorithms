#include <iostream>
using namespace std;

void selectionSort(int arr[],int size)
{
    for (int i=0; i<size-1 ; i++)
    {
        int minIndex=i;
        for (int j=i+1 ; j<size ; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main()
{
    int UnSarr[6]={16,78,34,9,7,100};
    selectionSort(UnSarr,6);

    for(int i=0;i<6;i++)
    {
        cout<<UnSarr[i]<<" ";
    }

}