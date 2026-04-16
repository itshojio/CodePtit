#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> a;
        for(int i=0;i<n;i++) {
            int x; cin >> x;
            a.insert(x);
        }
        int o=*a.begin();
        int p=*a.rbegin();
        int b=p - o + 1 - a.size();
        cout << b <<'\n';
    }
    return 0;
}