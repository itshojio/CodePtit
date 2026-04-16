//#include<iostream>
//#include<string>
//#include<ctype.h>
//#include<algorithm>
//#include<cmath>
//#include<vector>
#include<bits/stdc++.h>
using namespace std;
int n;
vector <char> a;
bool ktra=true;
void dulieuvao (void){
    cin >> n;
    a.assign(n+1,'A');
}
void ketqua (void){
    for(int i=1;i<=n;i++){
        cout << a[i];
    }
        cout <<" ";
}
void hamsinh1 (void){
    int i=n;
    while(i > 0 && a[i]=='B'){
        a[i]='A';
        i--;
    }
    if(i > 0){
        a[i]='B';
    } else {
        ktra=false;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
          dulieuvao();
          ktra=true;
          while(ktra){
            ketqua();
            hamsinh1();
          }
         cout <<'\n';
    }
    return 0;
}