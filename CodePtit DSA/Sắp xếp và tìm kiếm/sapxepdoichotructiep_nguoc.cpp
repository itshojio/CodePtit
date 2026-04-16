#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        vector<string> b;
        for(int i = 0; i < n - 1; i++) {
            bool check = false; 
            for(int j = i + 1; j < n; j++) {
                if(a[j] < a[i]) {
                    swap(a[i], a[j]);
                    check = true; 
                }
            }
            if(check) { 
                string s = "Buoc " + to_string(i+1) + ": ";
                for(auto x : a) s += to_string(x) + " ";
                b.push_back(s);
            } else {
                break;
            }
        }
        for(int i = b.size()-1; i >= 0; i--) {
            cout << b[i] << '\n';
        }
    }
    return 0;
}