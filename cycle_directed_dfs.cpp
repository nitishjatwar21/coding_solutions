#include<bits/stdc++.h>
using namespace std;

class Graph{
  int V;
  list<int> *adjList;
  


  public:
  Graph(int v){
    V=v;
    adjList = new list<int>[V];
    
  
  }
  void addEdge(int u,int v){
    adjList[u].push_back(v);
   
  }

  bool dfs(int st,bool vis[],bool rec[]){
      if(!vis[st]){
          vis[st]=true;
          rec[st]=true;
      }
      for(int ele : adjList[st]){
        if(!vis[ele]){
          if(dfs(ele,vis,rec)){
            return true;
          }
        }
        else if(rec[ele]==true){
          return true;
        }
      }
      rec[st]=false;
      return false;
  }

  bool isCyclic(){
      bool *visited= new bool[V]{0};
      bool *rec = new bool[V]{0};
      for(int i=0;i<V;i++){
       if(!visited[i] and dfs(i,visited,rec)){
          return true;
       }
      }
      return false;
  }
};

int main(){
  Graph g(3); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    
    
    if(g.isCyclic()==true){
      cout<<"cyclic";
    }
    else{
      cout<<"not cyclic";
    }
}