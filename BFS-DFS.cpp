#include<bits/stdc++.h>
using namespace std;

void dfs(int node ,int parent,vector<int>adj[]){
  cout<<node<<" ";
  for(auto it:adj[node]){
    if(it!=parent){
      dfs(it,node,adj);
    }
  }

}
void bfs(vector<int>adj[]){
  queue<pair<int,int>>q;
  q.push({1,0});
  while(!q.empty()){
    auto it = q.front();
    int node = it.first;
    int parent = it.second;
    cout<<node<<" ";
    q.pop();
    for(int i=0;i<adj[node].size();i++){
      if(adj[node][i]!=parent){
        q.push({adj[node][i],node});
      }
    }
  }
}

int main(){
  int node;
  cin>>node;
  vector<int>adj[node+1];
  for(int i =0;i<node-1;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);

  }
  cout<<"The BFS on the entered tree is"<<endl;
  bfs(adj);
  cout<<endl;
  cout<<"The depth first search traversal on the input tree is"<<endl;
  dfs(1,0,adj);

  return 0;
}