#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int knapsack(int index,int value[],int wt[],int weight,int n,vector<vector<int>>&dp){
  if(index==n) return 0;

  int cost = -1;
  if(dp[index][weight]!=-1) return dp[index][weight];

  if(wt[index]<=weight){
    cost = max(cost , value[index]+knapsack(index+1,value,wt,weight-wt[index],n,dp));
  }
  cost = max(cost,knapsack(index+1,value,wt,weight,n,dp));

  dp[index][weight]=cost;
  return cost;
}



int main(){
  int n;
  cin>>n;
  int value[n];
  int wt[n];
  for(int i=0;i<n;i++){
    cin>>value[i];
  }
  for(int i=0;i<n;i++){
    cin>>wt[i];
  }
  int weight;
  cin>>weight;
  vector<vector<int>>dp(100,vector<int>(100,-1));

    cout<<knapsack(0,value,wt,weight,n,dp)<<endl;



  return 0;
}