#include<bits/stdc++.h>
using namespace std;
int solution (vector<int> &a, vector<int> &b, int k){
    int i=0; int j=0; int dem = 0;
    int val;
    while( i < a.size() && j < b.size()){
        if(a[i] < b[j]) {
           val = a[i];
           i++;
           dem++;
        } else {
            val=b[j];
            j++;
            dem++;
        }
        if(dem==k) return val;
    }
    while(i < a.size()){
          dem++;
          i++;
          if(dem==k) return a[i];
    }
    while(j < b.size()){
        dem++;
        j++;
        if(dem==k) return b[j];
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    cout << solution(a,b,k) <<'\n';
    }
    return 0;
}