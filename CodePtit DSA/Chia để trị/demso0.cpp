#include<bits/stdc++.h>
using namespace std;
int solution (vector<int> &a){
    int l=0;
    int r=a.size()-1;
    int pos=a.size();
    if(a[a.size()-1]==0) return pos;
    if(a[0]!=0) return 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid] != 0){
            r=mid-1;
            pos=mid;
        } else {
            l=mid+1;
        }
    }
    return pos;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dem=0;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        cout << solution(a) <<'\n';
    }
    return 0;
}