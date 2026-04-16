#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        auto it = lower_bound(a.begin(),a.end(),k);
        int vitri = it-a.begin()+1;
        cout << vitri+1 <<'\n';
    }
    return 0;
}