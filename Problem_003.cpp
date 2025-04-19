--Problem Link: https://codeforces.com/contest/433/problem/B

#include<bits/stdc++.h>
using namespace std; 

int main(){
  int n; cin>>n;
  int a[n+1];
  a[0] = 0;
  for(int i = 1; i<=n; i++) cin>>a[i];
  
  
  long long b[n+1], c[n+1];
  b[0] = 0;
  c[0] = 0;

  for(int i = 1; i <= n; i++) b[i] =b[i-1] + a[i];
  sort(a, a+n+1);
  for(int i = 1; i <= n; i++) c[i] =c[i-1] + a[i];
  
  int q; cin>>q;
  while(q--){
    int opt,l,r;
    cin>>opt>>l>>r;
    if(opt == 1) cout<<(b[r] - b[l-1])<<endl;
    else cout<<(c[r] - c[l-1])<<endl;
  }
  return 0;
    
}
