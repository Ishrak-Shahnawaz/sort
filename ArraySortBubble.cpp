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
        for(int j=0; j<10-i; j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1], arr[j]);
            }
        }
    }

    cout<<endl;

    for(int i=0; i<x; i++)
    {
        cout<<arr[i]<<" ";
    }

}
