#include<iostream>
using namespace std;

void conqure(int arr[], int st, int mid, int ed)
{
    int temp[ed+1];
    int idx1 = st;
    int idx2 = mid + 1;
    int x = st;

    while(idx1<=mid && idx2<=ed)
    {
        if(arr[idx1]<arr[idx2])
        {
            temp[x] = arr[idx1];
            idx1++;
        }
        else
        {
            temp[x] = arr[idx2];
            idx2++;
        }
        x++;
    }

    while(idx1<=mid)
    {
        temp[x] = arr[idx1];
        idx1++;
        x++;
    }

    while(idx2<=ed)
    {
        temp[x] = arr[idx2];
        idx2++;
        x++;
    }

    for(int i=st; i<=ed; i++)
    {
        arr[i] = temp[i];
    }

}


void divide(int arr[], int st, int ed)
{
    if(st<ed)
    {
        int mid = (st + ed) / 2;
        divide(arr, st, mid);
        divide(arr, mid + 1, ed);
        conqure(arr, st, mid, ed);
    }

}


int main()
{
    int arr[] = {5, 6, 4, 1, 8, 9, 4, 7, 4, 5};
    int st = 0;
    int ed = 9;
    divide(arr, st, ed);
    for(int i=0; i<=ed; i++)
    {
        cout<<arr[i]<<" ";
    }

}
