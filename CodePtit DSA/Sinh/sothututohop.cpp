#include<bits/stdc++.h>
using namespace std;
int n,k,ktra=1,dem=0;
vector<int>a;
vector<int>b;
void dulieuvao(void){
    cin >> n >> k;
    a.resize(k);
    b.resize(k);
    for(int i=0;i<k;i++){
        cin >> b[i];
        a[i]=i+1;
    }
}
void ketqua (void){
    dem++;
    if(a==b){
        cout << dem <<'\n';
        ktra=0;
    }
}
void hamsinhtohop (void){
    int i=k-1;
    while(i>=0 && a[i]==n-k+i+1) i--;
    if(i >= 0){
        a[i]=a[i]+1;
        for(int j=i+1;j<k;j++){
            a[j]=a[i]+j-i;
        }
    } else {
        ktra=0;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        dulieuvao();
        ktra=1;
        dem=0;
        while(ktra){
            ketqua();
            hamsinhtohop();
        }
    }
    return 0;
}