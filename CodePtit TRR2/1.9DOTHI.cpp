#include<bits/stdc++.h>
using namespace std;
void fileinout(){
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
}
int main(){
//    fileinout();
    int t,n ;
    cin >> t >> n;
    vector<int> deg;
    vector<vector<int>> a(n,vector<int>(n,0));
    for (int i = 0;i < n;i++){
        int m; cin >> m;
        deg.push_back(m);
        while(m > 0){
            int x; cin >> x;
            a[i][x-1] = 1;
            m--;
        }
    }
    if (t == 1){
        for (auto x : deg) cout << x << " ";
    } else {
        vector<pair<int,int>> b;
        int dem = 0;
        for (int i = 0;i < n;i++){
            for (int j = i;j < n ;j++){
                if (a[i][j] == 1){
                    dem += 1;
                    b.push_back({i,j});
                }
            }
        }
        sort(b.begin(),b.end());
        vector<vector<int>> c(n,vector<int>(b.size(),0));
        for (int i = 0;i < b.size() ;i++){
            c[b[i].first][i] = 1;
            c[b[i].second][i] = 1;
        }
        cout << n <<" "<< dem <<'\n';
        for (int i = 0; i < n;i++){
            for (int j = 0;j < b.size();j++){
                cout << c[i][j] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}