-- Problem Link: https://codeforces.com/problemset/problem/1520/D

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      vector<int>v(n);
      for(int i = 0; i < n; i++){
        cin>>v[i];
        v[i] -= i;
      }
      
      map<ll,ll>mp;
      for(auto it: v) mp[it]++;
      
      ll val = 0;
      for(auto it:mp) val += (it.second * (it.second - 1)) / 2;
      cout<<val<<endl;
    }
    return 0;
}
