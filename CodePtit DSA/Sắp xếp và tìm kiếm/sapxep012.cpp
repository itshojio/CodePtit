#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t ;
    while(t--){
        int n; cin >> n;
        int a[10001];
        int dem1=0,dem2=0,dem3=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==0) dem1++;
            else if(a[i]==1) dem2++;
            else dem3++;
        }
        while(dem1 > 0) {
            cout << 0 <<" "; 
            dem1--;
        }
        while(dem2 > 0) {
            cout << 1 <<" ";
            dem2--;
        }
        while(dem3 > 0) {
            cout << 2 <<" "; 
            dem3--;
        }
        cout <<'\n';
    }
    return 0;
}