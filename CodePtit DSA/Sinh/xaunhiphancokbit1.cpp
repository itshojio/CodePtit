#include<iostream>
#include<string>
#include<ctype.h>
#include<algorithm>
#include<cmath>
#include<vector>
int n,k;
int a[1001];
bool ktra=true;
void dulieuvao (void){
    std :: cin  >> n;
    std :: cin  >> k;
}
void hamsinh(void){
    int i=n;
    while(i>0 && a[i]==1){
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
    int dem =0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) dem ++;  
    }
    if(dem==k){
        for(int i=1;i<=n;i++){
        std :: cout << a[i];
    }
        std :: cout << "\n";
    }    
}
int main(){
    int t;
    std :: cin >> t;
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