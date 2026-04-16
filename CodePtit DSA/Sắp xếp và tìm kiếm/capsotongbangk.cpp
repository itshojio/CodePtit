#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   while(t--){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a ) cin >> x;
    map<int,int> b;
    for(auto x : a){
      b[x]++;
    }
    int ans=0;
    for(auto m : b){
      int x=m.first;
      int y=k-x;
      if(b.find(y) != b.end()) {
         if(x < y){
            ans += b[x] * b[y];
         } else if(x==y){
            ans += b[x] * (b[x] -1) / 2; 
         }
      }
    }
    cout << ans <<'\n';
   }
   return 0;
}