#include<bits/stdc++.h>
using namespace std;
void fileinout(){
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
}
int main(){
    fileinout();
    int t, n, k;
    cin >> t >> n >> k;
    vector<vector<int>> a(n,vector<int>(n,0));
    for (int i = 0;i < k;i++){
        int x,y; cin >> x >> y;
        a[x-1][y-1] = 1;
    }
    if (t == 1){
        for (int i = 0;i < n; i++){
            int dem1 = 0;
            int dem2 = 0;
            for (int j = 0;j < n;j++){
                if (a[i][j] == 1){
                    dem2 ++;
                }
                if (a[j][i] == 1){
                    dem1 ++;
                }
            }
            cout << dem1 <<" "<< dem2 << '\n';
        }
    } else {
        cout << n <<'\n';
        for (int i = 0 ;i < n;i++){
            for (int j = 0;j < n;j++){
                cout << a[i][j] <<" ";
            }
            cout << '\n';
        }
    }
    return 0;
}