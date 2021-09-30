/* Topological sort in DAG using DFS */
/* Note:- Topological Sort can only be applied in DAG(Directed Acyclic Graph) */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void toposort(int start,stack<int>&st,vector<int>adj[],int n,vector<int>&visited){
 visited[start]=1;
 for(int i=0;i<adj[start].size();i++){
   if(!visited[adj[start][i]])
     toposort(adj[start][i],st,adj,n,visited);
 }
st.push(start);
}

int main() {
	// your code goes here
    int n,m,u,v;
    cin>>n>>m;
    vector<int>adj[n];
    vector<int>visited(n,0);

    while(m--){
     cin>>u>>v;
     adj[u].push_back(v);
    }

   stack<int>st;
   for(int i=0;i<n;i++){
    if(!visited[i])
     toposort(i,st,adj,n,visited);
   }

  while(!st.empty()){
   cout<<st.top()<<" ";
   st.pop();
  }
	return 0;
} 