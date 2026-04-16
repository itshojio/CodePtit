#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >>k;
        int a[10001];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        multimap<int,int> b;
        for(int i=0;i<n;i++){
            int c=abs(k-a[i]);
            b.insert({c,a[i]});
        }
        for(auto l : b){
            cout << l.second <<" ";
        }
        cout <<'\n';
    }
    return 0;
}