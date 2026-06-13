#include<bits/stdc++.h>
using namespace std;
void fileinout (){
    freopen("DT.INP","r",stdin);
    freopen("DT.OUT","w",stdout);
}
int main(){
    fileinout();
    int t,n;
    cin >> t >> n;
    vector<int> deg;
    vector<vector<int>> a(n,vector<int>(n,0));
    for (int i = 0 ;i < n ; i++){
        int m ;
        cin >> m;
        deg.push_back(m);
        while (m > 0){
            int x; cin >> x;
            a[i][x-1] = 1;
            m--;
        }
    }
    if (t == 1){
        for (auto x : deg) cout << x <<" ";
    } else {
        int dem  = 0;
        vector<int> canh;
        for (int i = 0;i < n;i ++){
            for (int j = i;j < n; j++){
                if (a[i][j] == 1){
                    dem += 1;
                    canh.push_back(i+1);
                    canh.push_back(j+1);
                }
            }
        }
        cout << n <<" "<< dem <<'\n';
        for (int i = 0 ;i < canh.size()-1;i+=2){
            cout << canh[i] << " " << canh[i+1] << '\n';
        }
    }
    return 0;
}