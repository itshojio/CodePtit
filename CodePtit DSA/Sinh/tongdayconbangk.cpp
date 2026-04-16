#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<ctype.h>
int n,k;
std :: vector<int> dauvao;
std :: vector<int> chon;
bool ktra =true;
int dem =0;
void dulieuvao (void){
    std::cin >> n;
    std::cin >> k;
    dauvao.resize(n);
    chon.resize(n+1);
    chon.assign(n,0);
    for(int i=0;i<n;i++){
        std::cin >> dauvao[i];
    }
}
void ketqua (void){
    int sum=0;
     std::vector<int> tohopcon ;
     for(int i=0;i<n;i++){
        if(chon[i]==1){
            sum+=dauvao[i];
            tohopcon.push_back(dauvao[i]);
        }
     }
     if(sum==k){
        dem++;
        for(auto c : tohopcon) {
            std::cout << c << " ";
        }
        std::cout <<'\n';
     } 
}
void hamsinh (void){
    int i=n-1;
    while(i >= 0 && chon[i]==1){
        chon[i]=0;
        i--;
    }
    if(i >= 0){
        chon[i]=1;
    } else {
        ktra= false;
    }
}
int main(){
    dulieuvao();
    while(ktra){
        ketqua();
        hamsinh();
        
    }
    std::cout << dem <<'\n';
    return 0;
}