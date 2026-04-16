#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    map<int,int> c;
    int a[10001];
    for(int i=0;i<n;i++){
        cin >> a[i];
        int x=a[i];
        while(x>0){
          int k=x % 10;
          c[k]++;
          x/=10;
        }
    }
    for(auto x : c){
        cout << x.first <<" ";
    }
    cout <<'\n';
    }
    return 0;
}