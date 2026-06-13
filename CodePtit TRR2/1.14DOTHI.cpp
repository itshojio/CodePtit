#include<bits/stdc++.h>
using namespace std;
void fileinout(){
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
}
int main(){
    fileinout();
    int t,n;
    cin >> t >> n;
    vector<vector<int>> a(n,vector<int>(n));
    for (int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
        }
    }
    if (t == 1){
        for(int i = 0;i < n;i++){
            int dem1 = 0;
            int dem2 = 0;
            for(int j = 0;j < n;j++){
                if (a[i][j] == 1){
                    dem2 += 1;
                }
                if (a[j][i] == 1){
                    dem1 += 1;
                }
            }
            cout << dem1 <<" "<< dem2 <<'\n';
        }
    } else {
        int dem = 0;
        vector<pair<int,int>> b;
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(a[i][j] == 1){
                    dem += 1;
                    b.push_back({i,j});
                }
            }
        }
        vector<vector<int>> c(n,vector<int>(dem));
        for(int i = 0;i < dem;i++){
            c[b[i].first][i] = 1;
            c[b[i].second][i] = -1;
        }
        cout << n <<" "<< dem <<'\n';
        for (int i = 0 ;i < n;i++){
            for (int j = 0;j < dem;j++){
                cout << c[i][j] <<" ";
            }
            cout << '\n';
        }
    }
    return 0;
}