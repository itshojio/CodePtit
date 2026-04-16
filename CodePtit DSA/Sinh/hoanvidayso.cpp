#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001];
bool ktra = true;;
void dulieuvao (){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+1+n);
}
void kqua (){
    for(int i=1;i<=n;i++){
        cout << a[i] <<" ";
    }
    cout <<'\n';
}
void sinhhoanvi (){
    int i=n-1;
    while(i>0 && a[i] > a[i+1]) i--;
    if(i>0){
        int k=n;
        while(a[i] > a[k]) k--;
        swap(a[i],a[k]);
        int l=i+1;
        int r=n;
        while(l<=r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    } else {
        ktra= false;
    }
}
int main(){
    dulieuvao();
    while(ktra){
        kqua();
        sinhhoanvi();
    }
    return 0;
}