-- Problem Link: https://codeforces.com/problemset/problem/1433/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    set<int>s;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
      cin>>v[i];
      s.insert(v[i]);
    }
    int val = v[0];
    int j;
    for(int i = 1; i < n; i++){
      if(v[i] != val){
        j = i+1;
        break;
      }
    }
    
    if(s.size() > 1){
      cout<<"YES"<<endl;
      for(int i = 2; i <= n; i++){
        if(v[i-1] == val){
          cout<<j<<" "<<i<<endl;
        }
         else cout<<1<<" "<<i<<endl;
      }
    }
    else cout<<"NO"<<endl;
  }
  return 0;
}
