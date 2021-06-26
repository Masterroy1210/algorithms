
/*
  DYNAMIC PROGRAMMING 
*/


#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int forg(int ind,int arr[],int dp[],int n,int k){
  if(ind==n-1)return 0;
  if(dp[ind]!=-1) return dp[ind];

  int cost =1e9;
  for(int i=1;i<=k;i++){
    if(ind+i<n){
      cost = min(cost,((abs(arr[ind]-arr[ind+i])*abs(arr[ind]-arr[ind+i]))+k)+forg(ind+i,arr,dp,n,k));
    }
  }

  return dp[ind]=cost;
}


int main(){
  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];

  }
  int k;
  cin>>k;
  int dp[n];
  for(int i=0;i<n;i++){
    dp[i]=-1;
  }
  cout<<forg(0,arr,dp,n,k)<<endl;
  return 0;

}
