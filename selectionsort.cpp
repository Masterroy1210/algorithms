#include<iostream>
using namespace std;



void selectionSort(int arr[],int size)
{
    int i ,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[j];
                arr[j] =arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"\nArray After sorting is\n";
    for(i=0;i<size;i++)
    {
        cout<<arr[i];
    }

}


int main()
{
    int size;
    cout<<"\n Enter the size of tteh array";
    cin>>size;
    int arr[size],i;
    cout<<"\n Enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,size);

    return 0;

    
}