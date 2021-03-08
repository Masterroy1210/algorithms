#include<iostream>
using namespace std;


void insertionSort(int arr[],int size)
{
    int value,index,i;
    for(i=0;i<size;i++)
    {
        value = arr[i];
        index=i;
        while(index>0 && arr[index-1]>value)
        {
            arr[index]=arr[index-1];
            index--;
        }
        arr[index]=value;

    }
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
    cout<<"\nEnter the array elemeents";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,size);
    return 0;
}