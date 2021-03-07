#include<iostream>
using namespace std;



void bubbleSort(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }

        }
    }

    cout<<"\nArray After sorting is";
    for(i=0;i<size;i++)
    {
        cout<<arr[i];
    }

}


int main()
{
    int size;
    cout<<"\nEnter the size of the array";
    cin>>size;
    int arr[size],i;
    cout<<"\nEnter the array elements";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bubbleSort(arr,size);
    return 0;

}