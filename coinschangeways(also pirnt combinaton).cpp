#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int  noways(int index,int sum,int coins[],int n,vector<int>&ds){
  if(index==n){
    if(sum==0){
      for(auto it:ds){
        cout<<it<<" ";

      }
       cout<<endl;
      return 1;
     

    }else {
      return 0;
    }

  }
   int count =0;
   if(coins[index]<=sum){
    ds.push_back(coins[index]);
    count +=noways(index,sum-coins[index],coins,n,ds);
    ds.pop_back();
   }

      count+= noways(index+1,sum,coins,n,ds);



    return count;
}




int main(){
  int n;
  cin>>n;
  int coins[n];
  for(int i=0;i<n;i++){
    cin>>coins[i];
  }
  int sum;
  cin>>sum;
  vector<int>ds;
  cout<<noways(0,sum,coins,n,ds);

  return 0;
}