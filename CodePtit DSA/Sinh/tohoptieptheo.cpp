#include<bits/stdc++.h>
using namespace std;
int n,k,x[1001],ktra=1;
vector <int> a;
vector <int> b;
void dulieudau (void){
    cin >> n >> k;
    a.clear();
    b.clear();
    for(int i=1;i<=k;i++){
        cin >> x[i];
        a.push_back(x[i]);
    }
}
void ketqua (void){
    b.clear();
    for(int i=1;i<=k;i++){
        b.push_back(x[i]);
    }
    int dem =0;
    for(int i=0;i<a.size();i++){
        bool found = false;
        for(int j=0;j<b.size();j++){
            if(a[i] == b[j]){
                found= true;
            }
        }
        if(!found) dem++;
    }
    cout << dem <<'\n';
}
void hamsinhtohop (void){
    int i=k;
    while( i > 0 && x[i] == n-k+i) i--;
    if( i > 0){
        x[i]=x[i]+1;
        for(int j=i+1;j<=k;j++){
            x[j]=x[i]+j-i;
        }
    } else {
        ktra = 0;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        dulieudau();
        ktra=1;
        hamsinhtohop();
        if(ktra){
            ketqua();
        } else cout << k <<'\n';
    }
    return 0;
}