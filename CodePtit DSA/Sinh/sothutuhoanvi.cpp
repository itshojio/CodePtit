#include<bits/stdc++.h>
using namespace std;
int n,ktra=1;
int dem =0;
vector<int>a;
vector<int>b;
void dulieuvao (void){
    cin >> n;
    a.resize(n);
    b.resize(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(a.begin(),a.end());
}
void ketqua (void){
   dem ++;
   if(a==b){
    cout <<dem<<'\n';
    ktra=0;
   }
}
void hamsinhhoanvi (void){
    int i=n-2;
    while(i >= 0 && a[i] >= a[i+1]) i--;
    if(i >= 0){
        int k=n-1;
        while ( a[i] >= a[k]) k--;
        swap (a[i],a[k]);
        int s=i+1;
        int v=n-1;
        while(s<v){
            swap(a[s],a[v]);
            s++;
            v--;
        }
    } else {
        ktra = 0;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        dulieuvao();
        ktra=1;
        dem=0;
        while(ktra){
            ketqua();
            hamsinhhoanvi();
        }
        cout <<'\n';
    }
    return 0;
}