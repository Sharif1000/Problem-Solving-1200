-- Problem Link: https://codeforces.com/problemset/problem/1857/C

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n; cin>>n;
    int l = n * (n - 1) / 2;
    int a[l];
    for(int i = 0; i < l; i++) cin>>a[i];
    sort(a, a+l);
    int x = n - 1, i = 0;
    while(x > 0){
      cout<<a[i]<<" ";
      i += x;
      x--;
    }
    cout<<1000000000<<endl;
  }
  return 0;
}
