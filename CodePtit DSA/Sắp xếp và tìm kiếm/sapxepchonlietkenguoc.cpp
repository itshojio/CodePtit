#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int dem=1;
    vector<int> a(n);
    vector<string> b;
    for(auto &x : a) cin >> x;
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
        if(a[j] < a[minindex]){
            minindex=j;
            }
        }
    swap(a[i],a[minindex]);
    string s="Buoc "+to_string(dem)+": ";
    for(auto x : a) s+=to_string(x) + " ";
    b.push_back(s);
    dem++;
    }
    for(int i=b.size()-1;i>=0;i--){
        cout << b[i]<<'\n';
    }
    return 0;
}