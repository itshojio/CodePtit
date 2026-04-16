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
    vector<int> b;
    for(auto x : a){
        if(find(b.begin(),b.end(),x)==b.end()){
            b.push_back(x);
        }
    }
    for(auto x : b) cout <<x <<" ";
    return 0;
}