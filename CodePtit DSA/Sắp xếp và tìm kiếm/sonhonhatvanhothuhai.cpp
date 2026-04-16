#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> a;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            a.insert(x);
        }
        vector<int> k;
        if(a.size() == 1) cout <<"-1" <<"\n";
        else {
            for(auto x : a)  k.push_back(x);
            cout << k[0] <<" "<<k[1]<<'\n';
        }
    }
    return 0;
}