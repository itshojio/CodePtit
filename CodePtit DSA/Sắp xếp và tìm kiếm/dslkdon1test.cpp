#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        a.push_back(x);
    }
    int k;
    cin >> k;
    vector<int> b;
    for(auto x : a){
        if(x==k) continue;
        cout << x <<" ";
    }
    return 0;
}