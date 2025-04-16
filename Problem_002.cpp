--Problem Link: https://codeforces.com/contest/1985/problem/E

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
      int x,y,z;
      long long k;
      cin>>x>>y>>z>>k;
      long long ans = 0;
      for(int i = 1; i <= x; i++){
        for(int j = 1; j <=y; j++){
          if(k % (i * j) == 0){
              long long l = k / (i * j);
              if(l <= z) ans = max(ans, (x - i + 1) *  (y - j + 1) * (z - l + 1));
          }
        }
      }
      cout<<ans<<endl;
    }
    return 0;
}
