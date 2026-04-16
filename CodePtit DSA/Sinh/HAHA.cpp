#include<bits/stdc++.h>
using namespace std;
int n;
bool ktra = true;
vector <char> a;
void dulieuvao(){
    cin >> n;
    a.assign(n+1,'H');
}
void ketqua (){
    if(a[1]!='H' || a[n]!= 'A') return ;
    for(int i=1;i<n;i++){
            if(a[i]=='H' && a[i+1]=='H' ){
               return ;
        }
    }
    for(int i=1;i<=n;i++){
            cout << a[i];
        } 
    cout <<'\n';
}
void hamsinh (){
    int i=n;
    while(i>0 && a[i]=='A'){
        a[i]='H';
        i--;
    }
    if(i>0){
        a[i]='A';
    } else {
        ktra = false;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        dulieuvao();
        ktra=true;
        while(ktra){
            ketqua();
            hamsinh();
        }
    }
    return 0;
}