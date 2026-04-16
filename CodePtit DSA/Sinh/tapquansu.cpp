#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
vector<int> c;
bool ktra = true;
void dlv (){
    cin >> n >> k;
    a.resize(k);
    c.resize(k);
    for(int i=0;i<k;i++){
        cin >> a[i];
        c[i]=a[i];
    }
}
void kqua (){
    int dem=0;
    set<int> b(a.begin(),a.end());
    for(auto x : c){
        if(b.count(x)){
            dem++;
        }
    }
    if(dem==k){
        cout << k <<'\n';
    } else {
        cout << k-dem<<'\n';
    }
}
void sinh (){
    int i=k-1;
    while(i >= 0 && a[i] == n-k+i+1) i--;
    if(i >=0 ){
        a[i]=a[i]+1;
        for(int j=i+1;j<k;j++){
            a[j]=a[i]+j-i;
        }
    } else {
        ktra = false;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ktra = true;
        dlv();
        sinh();   
        kqua();
    }
    return 0;
}