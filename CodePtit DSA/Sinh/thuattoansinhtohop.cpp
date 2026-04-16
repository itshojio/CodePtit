#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#define MAX 1000
using namespace std;
int n,k,a[MAX],check=1,dem=0;
void tohop (void){
    cout << "\n nhap so n = " ; cin >> n;
    cout << "\n nhap so k = " ; cin >> k;
    for(int i=1;i<=k;i++){
        a[i]=i ;
    }
}
void tohopdau (void){
    cout << " \n ket qua buoc " << ++dem << " \t : "; 
    for(int i=1;i<=k;i++){
        cout << a[i] << " ";
    }
}
void hamsinh (void){
    int i=k;
    while(i > 0 && a[i] == n-k+i) i--;
    if(i > 0){
        a[i]=a[i]+1;
        for(int j=i+1;j<=k;j++){
            a[j]=a[i]+j-i;
        }
    } else {
        check = 0;
    }
}
int main(){
   tohop();
   while(check){
    tohopdau();
    hamsinh();
   }
   return 0;
}