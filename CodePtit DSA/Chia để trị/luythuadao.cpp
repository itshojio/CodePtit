#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long luythua (long long cs ,long long mu){
    if(mu == 0) return 1;
    if(mu == 1){
        return cs % MOD;
    }
    long long ketqua = luythua (cs,mu/2);
    if(mu%2==0){
        return (ketqua * ketqua) % MOD;
    } else {
        return ((ketqua * ketqua) % MOD * cs ) % MOD;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string m= to_string(n);
        reverse(m.begin(),m.end());
        long long k = stoll (m);
        cout << luythua(n,k);
        cout <<'\n';
    }
    return 0;
}