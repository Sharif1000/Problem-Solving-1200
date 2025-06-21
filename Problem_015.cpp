-- Problem Link: https://codeforces.com/contest/1504/problem/B

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
      int n; cin>>n;
      string a, b; cin>>a>>b;
      
      int one = 0, zero = 0;
      vector<pair<int,int>>v;
      int j = 0;
      
      for(int i = 0; i < n; i++){
        if(a[i] == '0') zero++;
        else one++;
        if(one == zero){
          v.push_back({j,i});
          j = i + 1;
        }
      }
      
      for(auto it:v){
        int start = it.first;
        int end = it.second;
        if(a[start] == b[start]) continue;
        else{
          for(int i = start; i <= end; i++){
            if(a[i] == '1') a[i] = '0';
            else a[i] = '1';
          }
        }
      }
      cout<< ((a == b) ? "YES":"NO") <<endl;
    }
    return 0;
}
