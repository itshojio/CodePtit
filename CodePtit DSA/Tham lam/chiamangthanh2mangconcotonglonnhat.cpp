#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >>n>> k;
        int a[1001];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int b=n-k;
        int sum1=0,sum2=0;
        if(b >= k){
        vector<int> c1;
        vector<int> c2;
        for(int i=0;i<k;i++) c1.push_back(a[i]);
        for(int i=k;i<n;i++) c2.push_back(a[i]);
        for(auto x : c1) sum1 += x;
        for(auto x : c2) sum2 += x;
        } else {
            vector<int> c1;
        vector<int> c2;
        for(int i=0;i<b;i++) c1.push_back(a[i]);
        for(int i=b;i<n;i++) c2.push_back(a[i]);
        for(auto x : c1) sum1 += x;
        for(auto x : c2) sum2 += x;
        }
        
        cout << abs (sum1-sum2) <<'\n';
    }
    return 0;
}