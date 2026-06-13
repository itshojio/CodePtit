//đồ thị có hướng

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
    vector<vector<int>> a(n,vector<int>(n,0));
    for (int i = 0;i < n;i ++){
        for (int j = 0;j < n ;j++){
            int x;
            cin >> x;
            a[i][j] = x;
        }
    }
    if (t == 1){
        for (int i = 0;i < n;i ++){
            int dem1 = 0;
            int dem2 = 0;
            for (int j = 0;j < n;j ++){
                if (a[i][j] == 1){
                    dem1 += 1;
                }
                if (a[j][i] == 1){
                    dem2 += 1;
                }
            }
            cout << dem2 << " " << dem1 <<'\n';
        }
    } else {
        int dem = 0;
        vector<pair<int,int>> b;
        for(int i = 0;i < n;i++){
            for (int j = 0;j < n;j++){
                if (a[i][j] == 1){
                    dem++;
                    b.push_back({i+1,j+1});
                }
            }
        }
        cout << n << " " << dem <<'\n';
        for (auto x : b){
            cout << x.first << " " << x.second <<'\n';
        } 
    }
    return 0;
}