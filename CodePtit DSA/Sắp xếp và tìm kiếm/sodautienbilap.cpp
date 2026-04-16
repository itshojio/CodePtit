#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        unordered_map<int,int> pos;
        int minpos = a.back()+1;
        int ans=-1;
        for(int i=0;i<n;i++){
            int x=a[i];
            if(pos.find(x)== pos.end()){
            pos[x]=i;
            } else {
                if(pos[x] < minpos){
                    minpos=pos[x];
                    ans=x;
                }
            }
        }
        if(ans!=-1) cout << ans <<'\n';
        else cout << "NO"<<'\n';
    }
    return 0;
}