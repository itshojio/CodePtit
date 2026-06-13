#include<bits/stdc++.h>
using namespace std;
void fileinout(){
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
}
int main(){
    fileinout();
    int t;
    cin >> t;
    int n,k;
    cin >> n >> k;
    vector<vector<int>> a(n,vector<int>(n,10000));
    while(k > 0){
        int x,y,z;
        cin >> x >> y >> z;
        a[x-1][y-1] = z;
        a[y-1][x-1] = z;
        k--;
    }
    int b = n-1;
    while (b >= 0){
        a[b][b] = 0;
        b--;
    }
    if (t == 1){
        for(int i = 0;i < n;i++){
            int dem = 0;
            for(int j = 0;j < n;j++){
                if (a[i][j] != 0 && a[i][j] != 10000){
                    dem ++;
                }
            }
            cout << dem <<" ";
        }
    } else {
        cout << n <<'\n';
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cout << a[i][j] <<" ";
            }
        cout << "\n";
        }   
    }
    return 0;
}