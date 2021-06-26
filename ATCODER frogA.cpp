/*
FROG A ATCODER PROBLEM USING DYNAMIC PROGRAMMING

*/


#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int forg(int ind,int arr[],int dp[],int n){
  if(ind==n-1)return 0;
  if(dp[ind]!=-1) return dp[ind];

  int left=abs(arr[ind]-arr[ind+1])+forg(ind+1,arr,dp,n);
  int right=10000006;
  if(ind+2<n){
    right=abs(arr[ind]-arr[ind+2])+forg(ind+2,arr,dp,n);
  }  

  return dp[ind]=min(left,right);
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];

  }
  int dp[n];
  for(int i=0;i<n;i++){
    dp[i]=-1;
  }
  cout<<forg(0,arr,dp,n)<<endl;
  return 0;

}
