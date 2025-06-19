-- Problem Link: https://codeforces.com/problemset/problem/1487/B

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int n, k; cin>>n>>k;
    k--;
    if(n % 2 == 0) cout<<(k % n) + 1<<endl;
    else{
      int val = n / 2 ;
      cout<<((k + (k / val)) % n )+ 1<<endl;
    }
  }
  return 0;
}
