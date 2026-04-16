#include<bits/stdc++.h>
using namespace std;
map<int,int> d;
bool ss (int x,int y){
    if(d[x] > d[y]) return true;
    if(d[x] < d[y]) return false;
    return x < y;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        d.clear();
        vector<int> l;
        for(int i=0;i<n;i++){
            int k;
            cin >> k;
            l.push_back(k);
            d[k]++;
        }
        sort(l.begin(),l.end(),ss);
        for(auto x : l) cout << x <<" ";
        cout <<'\n';
    }
    return 0;
}