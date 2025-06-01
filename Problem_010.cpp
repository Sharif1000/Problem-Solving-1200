-- Problem Link: https://codeforces.com/problemset/problem/1872/D

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    long long n, x, y; cin>>n>>x>>y;
    long long lcm = (x * y) / __gcd(x,y);
    long long fst = n / x - n / lcm;
    long long snd = n / y - n / lcm;
    long long sum = (n * (n + 1)) / 2 - ((n - fst)* (n - fst + 1)) / 2- snd*(snd+1) / 2;
    cout<<sum<<endl;
  }
  return 0;
}
