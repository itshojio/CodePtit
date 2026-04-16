#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1001];
bool ktra= true;
int dem1=0;
vector<string> b;
void dlv (){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
bool check(string s){
    int dem = 0;
    int demsoday = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            dem++;
        } else {
            if(dem == k) demsoday++;
            dem = 0;
        }
    }
    if(dem == k) demsoday++;
    return demsoday == 1;
}
void kqua (){
    string s="";
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            s+="A";
        }
        else s+="B";
    }
    if(check(s)){
        b.push_back(s);
        dem1++;
    }else{
        return;
    }
}
void sinh (){
    int i=n;
    while(i > 0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i>0){
        a[i]=1;
    } else {
        ktra=false;
    }
}
int main(){
    dlv();
    while(ktra){
        kqua();
        sinh();
    }
    cout << dem1 <<'\n';
    for(auto x : b){
        cout << x <<'\n';
    }
}