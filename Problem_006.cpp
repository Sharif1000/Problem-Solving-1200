-- Problem Link: https://codeforces.com/contest/1681/problem/C

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ar[n],br[n];
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n; i++) cin>>br[i];
        
        vector<pair<int,int>>ans;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                if(ar[j]>ar[j+1] || br[j]>br[j+1]){
                    swap(ar[j],ar[j+1]);
                    swap(br[j],br[j+1]);
                    ans.push_back({j+1,j+2});
                }
            }
        }
        
        bool flag = true;
        for(int i=0; i<n-1; i++){
            if(ar[i]>ar[i+1] || br[i]>br[i+1]){
                flag = false;
                break;
            }
        }
        
        if(flag == false) cout<<-1<<endl;
        else{
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++){
              cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }
        }
    }
    return 0;
}
