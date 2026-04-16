#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
/*        auto it = find(a.begin(),a.end(),k);
        if(it != a.end()) cout << "1" <<'\n';
        else cout << "-1" <<'\n';
*/
        sort(a.begin(),a.end());
        if(binary_search(a.begin(),a.end(),k)){
        cout <<"1"<<'\n';
        } else {
        cout <<"-1"<<'\n';
        }
    }
    return 0;
}