#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n,0);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long times = LLONG_MIN;
        if(n>=2) times = max(times ,1LL* a[0] * a[1]);
        if(n>=2) times = max(times ,1LL* a[n-1] * a[n-2]);
        if(n>=3) times = max(times ,1LL* a[1] * a[0] * a[n-1]);
        if(n>=3) times = max(times ,1LL* a[n-1] * a[n-2] * a[n-3]);
        cout << times <<'\n';
    }
    return 0;
}