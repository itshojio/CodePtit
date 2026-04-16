#include<bits/stdc++.h>
using namespace std ;
int n,ktra=1;
int a[1001];
void daydau (void){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
}
void ketqua (void){

    for(int i=1;i<=n;i++){
        cout << a[i]<<" ";
    }
    cout <<'\n';
}
void hamsinhhoanvi (void){
    int i=n-1;
    while(i > 0 && a[i] > a[i+1]) i--;
    if( i > 0){
        int k=n;
        while(a[i] > a[k] ) k--;
        swap(a[i],a[k]);
        int r = i+1;
        int s = n;
        while(r<=s) {
            swap(a[r],a[s]);
            r++;
            s--;
        }
    } else {
        ktra = 0;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ktra =1;
        daydau();
        hamsinhhoanvi();
        if(ktra){
            for(int i=1;i<=n;i++){
                cout << a[i]<<" ";
            }
        }
        cout <<'\n';
    }  
return 0;
}