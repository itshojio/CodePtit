#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(auto &c : a) cin >> c;
        for(auto &c : b) cin >> c;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        long long sum=0;
        for(int i=0;i<n;i++){
            long long d= a[i] * b[i];
            sum += d;
        }
        cout << sum <<'\n';
    }
    return 0;
}