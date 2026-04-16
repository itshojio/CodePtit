#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto &x : a) cin >> x;
    vector<long long> le, chan; 
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) chan.push_back(a[i]);
        else le.push_back(a[i]);        
    }
    sort(chan.begin(), chan.end());      
    sort(le.rbegin(), le.rend());   
    int odd_idx = 0, even_idx = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) a[i] = chan[odd_idx++];
        else a[i] = le[even_idx++];
    }

    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}