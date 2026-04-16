#include<bits/stdc++.h>
using namespace std;
int midpos (vector<int> &a,int n){
    long long sum=0;
    for(auto x : a) sum+=x;
    long long sum1=0;
    long long sum2=0;
    for(int i=0;i<n;i++){
        sum2 = sum - sum1 - a[i];
        if(sum1 == sum2){
           return i+1;
        }
        sum1 += a[i];
    }
    return -1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        cout << midpos(a,n) <<'\n';
    }
    return 0;
}