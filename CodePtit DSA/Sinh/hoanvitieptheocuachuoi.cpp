#include<bits/stdc++.h>
using namespace std;
string s;
vector<int> a;
bool ktra =  true;
void dlv (){
    cin >> s;
    a.clear();
    for(auto x : s){
        a.push_back(x - '0');
    }
}
void kqua (){
    for(int i=0;i<s.length();i++){
        cout << a[i];
    }
    cout <<'\n';
}
void sinh (){
    int i=s.size()-1;
    while(i > 0 && a[i-1] >= a[i]) i--;
    if(i > 0){
        int k=s.size()-1;
        while(a[i-1] >= a[k]) k--;
        swap(a[i-1],a[k]);
        int l=i;
        int r=s.size()-1;
        while(l<=r){
            swap(a[l],a[r]);
                l++;
                r--;
        }
    } else {
        ktra = false;
    }
}
int main(){
   int t;
   cin >> t;
   while(t--){
    ktra= true;
    int stt;
    cin >> stt;
    dlv();
    sinh();
    cout << stt <<" ";
    if(!ktra){
        cout <<"BIGGEST"<<'\n';
    } else {
        kqua();
    }
   }
   return 0;
}