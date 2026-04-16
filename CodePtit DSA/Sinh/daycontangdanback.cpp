#include<bits/stdc++.h>
using namespace std;
int n,k;
int dem=0;
bool ktra = true;
int a[1001];
int b[1001];
void dlv (){
    cin >> n >> k;
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
    for(int i=1;i<=n;i++){
        cin >> b[i];
    }
}
void kqua (){
    for(int i=1;i<k;i++){
        if(b[a[i]] >= b[a[i+1]])
            return;
    }
    dem++;
}
void sinhtohop (){
    int i=k;
    while( i > 0 && a[i]==n-k+i)i--;
    if(i>0){
        a[i]=a[i]+1;
        for(int j=i+1;j<=k;j++){ 
            a[j]=a[i]+j-i;
        }
    } else {
        ktra = false;
    }
}
int main(){
    dlv();
    while(ktra){
        kqua();
        sinhtohop();
    }
    cout << dem <<'\n';
}