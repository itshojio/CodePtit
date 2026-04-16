#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        long long res =0;
        for(int i=0;i<n;i++){
            res += (a[i]*i) % MOD;
        }
        cout << res <<'\n';
    }
    return 0;
}