#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x : a) cin >> x;
        sort(a.begin(),a.end());
        long long gap = LLONG_MAX;
        for(int i=0;i<n-1;i++){
            if(abs(a[i] - a[i+1]) < gap){
                gap = abs(a[i] - a[i+1]);
            }
            if(gap==0){
                break;
            }
        }
        cout << gap <<'\n';
    }
    return 0;
}