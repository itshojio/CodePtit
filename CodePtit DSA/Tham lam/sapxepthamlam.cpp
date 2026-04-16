#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[1001];
        for(int i=0;i<n;i++) cin >> a[i];
        int b[1001];
        for(int i=0;i<n;i++) b[i]=a[i];
        sort(b,b+n);
        bool ktra = true;
        for(int i=0;i<n;i++){
            if(a[i] != b[i] && a[i] != b[n-i-1]) {
                ktra=false;
                break;
            }
        }
        if(ktra) {
            cout <<"Yes"<<'\n';
        } else {
            cout <<"No"<<'\n';
        }
    }
    return 0;
}