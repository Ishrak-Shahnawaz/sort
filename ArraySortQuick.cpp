#include<iostream>
using namespace std;

//pivot = last element
int partition1(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int item = arr[i];
            arr[i] = arr[j];
            arr[j] = item;
        }
    }
    i++;
    int item = arr[i];
    arr[i] = pivot;
    arr[high] = item;

    return i;

}


//pivot = first element
int partition2(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = high + 1;

    for(int j=high; j>low; j--)
    {
        if(arr[j]>pivot)
        {
            i--;
            swap(arr[j], arr[i]);
        }
    }
    i--;
    swap(arr[i], arr[low]);
    return i;
}



void quickSort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pov = partition2(arr, low, high);

        quickSort(arr, low, pov-1);
        quickSort(arr, pov+1, high);
    }
}

int main()
{
    int arr[] = {6, 2, 7, 4, 9, 1, 3, 5, 9, 2};
    quickSort(arr, 0, 9);
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ";
    }
}
