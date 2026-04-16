#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
bool ktra = true;
void vao(){
    cin >> n;
    a.resize(n,0);
}
void ra (){
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    cout << " ";
}
void sinhgrey (){
    int pos = -1;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            pos=i;
            break;
        }
    }
    if(pos==-1){
       a[n-1]=1;
       return;
    }
    if(pos==0){
        ktra=false;
        return;
    }
    a[pos-1] ^= 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    ktra=true;
    vao();
    ra();
    while(ktra){
        sinhgrey();
        if(ktra) ra();    
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int lim = 1 << n;

        for(int i = 0; i < lim; i++){
            int g = i ^ (i >> 1);   // công thức Gray
            for(int j = n - 1; j >= 0; j--){
                cout << ((g >> j) & 1);
            }
            if(i != lim - 1) cout << " ";
        }
        cout << '\n';
    }
    return 0;
}
