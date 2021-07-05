#include<bits/stdc++.h>
using namespace std;




int main(){
  int node;
  cin>>node;
  vector<int>adj[node+1];
  for(int i=1;i<node;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);


  }
  for(int i=1;i<node;i++){
     cout<<"for node number "<< i<<"- ";
    for(int j=0;j<adj[i].size();j++){

      cout<<adj[i][j]<<" ";
    }
    cout<<endl;

  }
  cout<<" traversing the tree BFS "<<endl;
  queue<pair<int,int>>q;
  q.push({1,0});
  while(!q.empty()){
    int nod = q.front().first;
    int par = q.front().second;
    q.pop();
    cout<<nod<<" ";
    for(int i=0;i<adj[nod].size();i++){
      if(adj[nod][i]!=par){
        q.push({adj[nod][i],nod});
      }
    }
  }
  return 0;
}