#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n,res=INT_MIN;
cin>>n;
vector<int> v(n),pre,suf;
stack<pair<int,int>> s,t;
for(int i=0;i<n;i++){
  cin>>v[i];
}
for(int i=0;i<n;i++){
  if(s.empty()){
    pre.push_back(-1);
  }
  else if(s.top().first<v[i]){
    pre.push_back(s.top().second);
  }
  else if(!s.empty() and s.top().first>=v[i] ){
    while(!s.empty() and s.top().first>=v[i]){
      s.pop();
    }
    if(s.empty()){
      pre.push_back(-1);
    }
    else{
      pre.push_back(s.top().second);
    }
  }
  s.push({v[i],i});
}

for(int i=n-1;i>=0;i--){
  if(t.empty()){
    suf.push_back(n+1);
  }
  else if(t.top().first<v[i]){
    suf.push_back(t.top().second);
  }
  else if(!t.empty() and t.top().first>=v[i] ){
    while(!t.empty() and t.top().first>=v[i]){
      t.pop();
    }
    if(t.empty()){
      suf.push_back(n+1);
    }
    else{
      suf.push_back(t.top().second);
    }
  }
  t.push({v[i],i});
}
reverse(suf.begin(),suf.end());
int temp;
for(int i=0;i<n;i++){
    temp = v[i]*(suf[i]-pre[i]-1);
    res=max(res,temp);
}
for(int i=0;i<n;i++){
  cout<<pre[i]<<" ";
}
cout<<"\n";
for(int i=0;i<n;i++){
  cout<<suf[i]<<" ";
}
cout<<"\n";
cout<<res;
}