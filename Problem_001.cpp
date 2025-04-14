--Problem Link: https://codeforces.com/contest/1926/problem/C

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    vector<int> res;
    for(int i = 0; i < 200007; i++){
      int sm = 0;
      int j = i;
      while(j > 0){
        sm +=j % 10;
        j /=10;
      }
      res.push_back(sm);
    }
    vector<int>presm(200007);
    presm[0] = 0;
    for(int i = 1; i < res.size(); i++){
      presm[i] = res[i] + presm[i-1];
    }
    
    while (t--) {
        int n; cin>>n;
        cout<<presm[n]<<endl;
    }
    return 0;
}
