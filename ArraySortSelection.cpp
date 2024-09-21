#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Give Array Size : ";
    cin>>x;

    cout<<endl;

    int arr[x];
    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<10; i++)
    {
        int mini = i;
        for(int j=i+1; j<10; j++)
        {
            if(arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int item = arr[i];
        arr[i] = arr[mini];
        arr[mini] = item;
    }

    cout<<endl;

    for(int i=0; i<x; i++)
    {
        cout<<arr[i]<<" ";
    }

}
