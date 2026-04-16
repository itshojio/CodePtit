#include<bits/stdc++.h>
using  namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n,m;
    cin >> n >> m;
    int k[10001];
    vector<int> a;
    vector<int> b;
    for(int o=0;o<n;o++) {int x ; cin >> x; a.push_back(x);}
    sort(a.begin(),a.end());
    for(int o=0;o<m;o++) {int x ; cin >> x; b.push_back(x);}
    sort(b.begin(),b.end());
    int i=0,j=0;
    int l=0;
    while(i < a.size() && j < b.size()){
        if(a[i] <= b[j]){
            k[l] = a[i] ; l++; i++;
        } else {
            k[l] = b[j] ; l++; j++;
        }
    }
    while( i < a.size()){
        k[l] = a[i]; l++; i++;
    }
    while( j < b.size()){
        k[l] = b[j]; l++; j++;
    }
    for(int o=0;o<l;o++) cout << k[o] <<" ";
    cout <<'\n';
    }
    return 0;
}