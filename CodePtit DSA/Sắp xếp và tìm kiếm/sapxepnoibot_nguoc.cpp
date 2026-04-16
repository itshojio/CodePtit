#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &x : a) cin >> x;
    vector<string> b;
    for(int j=1;j<n;j++){
        bool check= false;
        for(int i=0;i<n-j;i++){
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);
            check=true;
        }
    }
    if(check){
        string s="Buoc " + to_string(j) + ": ";
        for(auto x : a) s+=to_string(x)+ " ";
        b.push_back(s);
    } else {
        break;
           }
    }
    for(int i= b.size()-1;i>=0 ;i--){
        cout << b[i] <<'\n';
        }
    }
    return 0;
}