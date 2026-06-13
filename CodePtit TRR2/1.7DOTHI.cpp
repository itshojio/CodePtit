#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<stdio.h>

using namespace std;
void fileinout(){
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
}
int main(){
    fileinout();
    int t ;
    cin >> t ;
    int n;
    cin >> n;
    vector<int> b;
    vector<vector<int>> a(n,vector<int>(n,0));
    for (int i = 0;i < n;i++){
        int m;
        cin >> m;
        b.push_back(m);
        while (m > 0){
            int x ;
            cin >> x;
            a[i][x-1] = 1;
            m--;
        }
    }
    if (t == 1) {
        for (auto x : b) cout << x <<" ";
    } else {
        cout << n <<'\n';
        for(int i =0;i<n;i++){
            for (int j=0;j<n;j++){
                cout << a[i][j] <<" ";
            }
            cout << '\n';
        }
    }
    return 0;
}