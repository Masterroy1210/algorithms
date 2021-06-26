#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mincost(int i,int j,vector<vector<int>>matrix,vector<vector<int>>&dp,int n){
  if(i>=n ||j>=n) return 1e9;

  if(i==n-1 && j==n-1) return matrix[i][j];
  if(dp[i][j]!=-1) return dp[i][j];

  int cost = 1e9;

  cost = min(cost,matrix[i][j]+mincost(i+1,j,matrix,dp,n));
  cost = min(cost,matrix[i][j]+mincost(i+1,j+1,matrix,dp,n));
  cost = min(cost,matrix[i][j]+mincost(i,j+1,matrix,dp,n));


    return dp[i][j]=cost;
}

void findpath(vector<vector<int>>matrix,vector<vector<int>>&dp,int n){

  
  int result = mincost(0,0,matrix,dp,n);
  cout<<result<<endl;
  result -= matrix[0][0];
  int i=0,j=0;
  cout<<" 0,0 ->"<<" ";
  while(i!=n-1 &&j!=n-1){

    if(i+1<n && dp[i+1][j]==result){
      i=i+1;
    }
    else if(i+1<n &&j+1<n && dp[i+1][j+1]==result){
      i=i+1;
      j=j+1;
    }else{
      j=j+1;
    }

    cout<<i<<" "<<j<<"->"<<" ";
    result = result-matrix[i][j];

}
cout<<n-1<<" "<<n-1<<endl;



}


int main(){
  int n;
  cin>>n;
  vector<vector<int>> matrix(n,vector<int>(n,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>matrix[i][j];
    }

  }

 vector<vector<int>>dp(n,vector<int>(n,-1));

 
  findpath(matrix,dp,n);







  return 0;
}