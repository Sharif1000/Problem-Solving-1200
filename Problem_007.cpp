-- Problem Link: https://codeforces.com/contest/1527/problem/B1

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    while (t--){
        int n; cin>>n;
        string s; cin>>s;
        int cnt = 0;
        for(int i = 0; i < n; i++){
          if(s[i] == '0') cnt++;
        }
        if(cnt == 0) cout<<"DRAW"<<endl;
        else if(cnt == 1 || cnt % 2 == 0) cout<<"BOB"<<endl;
        else cout<<"ALICE"<<endl;
    }
}
