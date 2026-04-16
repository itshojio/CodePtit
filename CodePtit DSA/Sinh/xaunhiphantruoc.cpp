#include<iostream>
#include<string> 
#include<ctype.h>
#include<algorithm>
#include<cmath>
#include<vector>
#define MAX 1000
int n;
bool ktra = true;
int a[MAX];
void hamsinh (void){
     int i=n;
     while( i > 0 && a[i]==1){
        a[i]=0;
        i--;
     }
     if(i>0){
        a[i]=1;
     } else {
        ktra = false;
     }
}
void ketqua (void){
    for(int i=1;i<=n;i++){
        std :: cout << a[i];
    }
        std :: cout <<'\n';
}
int main(){
    int t;
    std :: cin >> t;
    while( t-- ){
        ktra = true;
        std :: string s;
        std :: cin >> s;
        n=s.size();
        for(int i=1;i<=n;i++){
            a[i]=s[i-1]-'0';
        }
        hamsinh();
        ketqua();
    }
    return 0;
}
