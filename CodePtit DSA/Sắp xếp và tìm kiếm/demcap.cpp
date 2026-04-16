#include <bits/stdc++.h>
using namespace std;

bool check(int n, int m){
    if( m==1 && n >1) return true;
    If(n==1 && m >1) return false;
    return (m * log(n) > n * log(m));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        int dem = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(check(a[i], b[j])) dem++;
            }
        }
        cout << dem << '\n';
    }
    return 0;
}
