#include<bits/stdc++.h>
using namespace std;
int solution (vector<int>&a ,int k){
    int l=0;int r= a.size()-1;
    int pos;
    while(l <= r){
        int mid =(l+r)/2;
        if(a[mid]==k){
            pos = mid+1;
            return pos;
        } 
        if(a[mid] < k){
            l=mid+1;
        } else {
            r=mid-1;
        }
    }
    return -1;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        int b = solution(a,k);
        if(b!=-1) cout << b <<'\n';
        else cout <<"NO" <<'\n';
    }
    return 0;
}