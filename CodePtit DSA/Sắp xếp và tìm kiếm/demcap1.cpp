#include<bits/stdc++.h>
using namespace std;
int modulo = 1e9 + 7;
long long luythua (long long cs ,long long sm){
    if(sm == 0) return 1;
    if(sm == 1) return cs % modulo;
    long long ketqua = luythua (cs, sm/2);
    if(sm % 2 == 0){
        return (ketqua * ketqua) % modulo ;
    } else {
        return (((ketqua * ketqua)% modulo) * cs) % modulo ;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n , m ;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for(auto &x : a) cin >> x;
    for(auto &y : b) cin >> y;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            long long u=luythua(a[i],b[j]);
            long long v=luythua(b[j],a[i]);
            if(u > v ){
                dem++;
            }
        }
    }
    cout << dem << '\n';
    }
    return 0;
}