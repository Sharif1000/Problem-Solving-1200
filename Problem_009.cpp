-- Problem Link: https://codeforces.com/problemset/problem/1909/B

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    long long a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 1; i <= 63; i++){
      long long k = 1ll << i;
      set<long long>s;
      for(int j = 0; j < n; j++) s.insert(a[j] % k);
      if(s.size() == 2){
        cout<<k<<endl;
        break;
      }
    }
  }
  return 0;
}
