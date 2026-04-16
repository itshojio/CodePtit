#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        double f= n/2;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        map<int,int> b;

        for(auto x : a){
            b[x]++;
        }
        int valmax = -1;
        double dem = f;
        for(auto &x : b){
            if(x.second > dem){
               valmax = x.first;
               dem = x.second;
            }
        }
        if(valmax != -1) cout << valmax <<'\n';
        else  cout <<"NO" <<'\n';
    }
    return 0;
}