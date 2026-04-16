#include<bits/stdc++.h>
using namespace std;
int n,ktra=1;
vector<int>a;
void dulieuvao (void){
    cin >> n;
    a.resize(n+1);
    for(int i=0;i<n;i++){
        a[i]=n-i;
    }
}
void ketqua (void){
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    cout <<" ";
}
void hamsinhhoanvi (void){
    int i=n-2;
    while(i >= 0 && a[i] < a[i+1]) i--;
    if(i >= 0){
        int k=n-1;
        while ( a[i] < a[k]) k--;
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
        while(ktra){
            ketqua();
            hamsinhhoanvi();
        }
        cout <<'\n';
    }
    return 0;
}