#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &x : a) cin >> x;
    for(int j=1;j<n;j++){
        bool check= false;
        for(int i=0;i<n-j;i++){
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);
            check=true;
        }
    }
    if(check){
        cout <<"Buoc "<<j<<": ";
        for(auto x : a) cout << x <<" ";
        cout <<'\n';
    } else {
        break;
    }
    }
    return 0;
}
