#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> b;
int a[1001];
int ktra = 1;
void dulieudau (){
    cin >> n >> k ;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    n=b.size();
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
}
void kqua (){
    for(int i=1;i<=k;i++){
        cout << b[a[i]-1] <<" " ;
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
    dulieudau();
    while (ktra)
    {
    kqua();
    sinhtohop();
    }
    return 0;
}