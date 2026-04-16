#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        set<int> a;
        set<int> b;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            a.insert(x);
        }
        for(int i=0;i<m;i++){
            int x; cin >> x;
            b.insert(x);
        }
        set<int> c;
        for(auto x:a)   c.insert(x);
        for(auto x:b)   c.insert(x);
        for(auto d : c) cout << d <<" ";
        cout <<'\n';
        for(auto x : a){
            if(b.count(x)){
                cout << x<<" ";
            }
        }
        cout <<'\n';
    }
return 0;
}