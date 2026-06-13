#include<bits/stdc++.h>
using namespace std;
void fileinout(){
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
}
int main(){
    fileinout();
    int t, n; 
    cin >> t >> n;
    vector<vector<int>> a(n,vector<int> (n));
    for (int i = 0 ;i < n; i++){
        for (int j = 0 ;j < n; j++){
            cin >> a[i][j];
        }
    }
    if (t == 1){
        for (int i = 0;i < n; i++){
            int dem  = 0;
            for (int j = 0;j < n; j++){
                if (a[i][j] != 0 && a[i][j] != 10000){
                    dem += 1;
                }
            }
            cout << dem <<" ";
        }
    } else {
        vector<pair<int,int>> b;
        int dem  = 0;
        for (int i = 0;i < n;i ++){
            for (int j = i;j < n ;j++){
                if (a[i][j] != 0 && a[i][j] != 10000){
                    dem ++ ;
                    b.push_back({i,j});
                }
            }
        }
        sort(b.begin(),b.end());
        cout << n <<" "<< dem <<"\n";
        for(auto x :  b){
            cout << x.first+1 <<" "<< x.second+1 <<" "<< a[x.first][x.second] <<'\n';
        }
    }
    return 0;
}