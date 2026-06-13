#include<bits/stdc++.h>
using namespace std;
void fileinout(){
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
}
int main(){
    fileinout();
    int t,n,k;
    cin >> t >> n >> k;
    vector<vector<int>> a(n,vector<int>(n,0));
    vector<pair<int,int>> b;
    while (k > 0){
        int x, y;
        cin >> x >> y;
        b.push_back({x-1,y-1});
        a[x-1][y-1] = 1;
        k--;
    }
    if (t == 1){
        for(int i = 0;i < n;i++){
            int dem1 = 0;
            int dem2 = 0;
            for(int j = 0;j < n;j++){
                if (a[i][j] == 1){
                    dem2++;
                }
                if (a[j][i] == 1){
                    dem1++;
                }
            }
            cout << dem1 <<" "<< dem2 <<"\n";
        }
    } else {
        cout << n <<" "<< b.size() <<'\n';
        vector<vector<int>> c(n,vector<int>(b.size(),0));
        for(int i = 0;i < b.size();i++){
            c[b[i].first][i] = 1;
            c[b[i].second][i] = -1;
        }
        for(int i = 0;i < n;i++){
            for(int j = 0;j < b.size();j++){
                cout << c[i][j] <<" ";
            }
            cout << '\n';
        }
    }
    return 0;
}