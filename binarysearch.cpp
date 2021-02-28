#include<iostream>
 using namespace std;



 int binarysearch(int arr[],int start,int end,int key)
 {
     int mid;
     while(start<=end)
     {
         mid=(start+end)/2;

         if(arr[mid]==key)
         return 1;

         if(arr[mid]>key)
            end = mid-1;
        else
            start = mid+1;
         
     }
     return 0;
 }



 int main()
 {
     int n,i,s,e,k;
     cout<<"\nEnter the size of the array\n";
     cin>>n;
     int a[n];
     cout<<"\nEnter the array in the sorted array";
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
     s = 0;
     e=n-1;
     cout<<"\nEnter the key to be searched";
     cin>>k;
     if(binarysearch(a,s,e,k)==1)
     {
         cout<<"\nThe entered element Present in the list";
     }
     else{
         cout<<"\nThe element not present in the array";
     }
     return 0;

 }