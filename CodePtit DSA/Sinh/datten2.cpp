#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1001];
//char alpha [26] = {A,B,C,D,E,F,J,H,I,J,K,L,M,N,O,P,Q,A,S,T,U,V,W,X,Y,Z};
int ktra = 1;
void dulieudau (){
    cin >> n >> k ;
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void kqua (){
    for(int i=1;i<=k;i++){
        cout << char('A' + a[i] - 1)  ;
    }
    cout <<'\n';
}
void sinhtohop (){
    int i=k;
    while(i > 0 && a[i]==n-k+i)i--;
    if(i>0){
        a[i]=a[i]+1;
        for(int j=i+1;j<=k;j++){
            a[j]=a[i]+j-i;
        }
    } else {
        ktra= 0;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        dulieudau();
        ktra=1;
    while (ktra)
    {
        kqua();
        sinhtohop();
    }
    }
    return 0;
}