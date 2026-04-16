#include<bits/stdc++.h>
using namespace std;
int chiamang (vector<long long> &a , long long x){
    int l=0;
    int r=a.size()-1;
    int ans=-1; // vitri can tim
    if(x < a[0]) return ans;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid] == x){
            return mid+1;
        } else if( a[mid] < x){
            ans = mid+1 ;
            l=mid+1;
        } else if( a[mid] > x){
            r=mid-1;
        }
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n;
        cin >> x;
        vector<long long> a(n);
        
        for(auto &o : a) cin >> o;
        sort(a.begin(),a.end());
        cout << chiamang(a,x) <<'\n';
    }
    return 0;
}