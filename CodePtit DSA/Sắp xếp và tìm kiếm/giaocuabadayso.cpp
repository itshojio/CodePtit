#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<long long> a,b,c;
        for(int i=0;i<n;i++){long long x; cin >> x ; a.push_back(x);}
        for(int i=0;i<m;i++){long long x; cin >> x ; b.push_back(x);}
        for(int i=0;i<k;i++){long long x; cin >> x ; c.push_back(x);}
        vector<long long> kqua ;
        int i=0;
        int j=0;
        int o=0;
        while(i < a.size() && j < b.size() && o < c.size()){
            if(a[i] == b[j] && b[j]==c[o]){
                kqua.push_back(a[i]);
                i++;
                j++;
                o++;
            } else {
                long long minval =min({a[i],b[j],c[o]});
                if(a[i]==minval) i++;
                if(b[j]==minval) j++;
                if(c[o]==minval) o++;
            }
        }
        if(!kqua.empty()){
            for(auto x : kqua) cout << x <<" ";
            cout <<'\n';
        } else cout <<"-1"<<'\n';
        
    }
    return 0;
}