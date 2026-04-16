#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> a;
    int k;
    cin >> k;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        if(x==k) continue;
        a.insert(x);
    }
    for(auto c : a) cout << c <<" ";
    return 0;
}