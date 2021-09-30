#include <bits/stdc++.h>
 using namespace std;
 
 vector<int> bfs(vector<int>adj[],int n){
  vector<int>v;
  bool visited[n]={0};
  queue<int>q;
  
  for(int i=0;i<n;i++){	
  if(!visited[i]){
  visited[i]=1;
  q.push(i);
  
  while(!q.empty()){	
   int temp=q.front();
   q.pop();
  v.push_back(temp);
  
   for(int i=0;i<adj[temp].size();i++){
     if(!visited[adj[temp][i]]){
      visited[adj[temp][i]]=1;
      q.push(adj[temp][i]);
    }
   }}}}
  return v;
}
int main() {
	// your code goes here
    int n,m,u,v;
    cin>>n>>m;
    vector<int>adj[n];
    
    while(m--){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    }
    
   vector<int>num(n);
   num=bfs(adj,n);
   
   for(int i=0;i<n;i++)
    cout<<num[i]<<" ";
	return 0;
}