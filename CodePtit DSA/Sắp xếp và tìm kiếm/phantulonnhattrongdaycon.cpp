#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> c;
        for(auto &x : a) cin >> x;
        for(int i=0;i<n;i++){
          int e = min(i+k,n);
          vector<int> b(a.begin()+i,a.begin()+e);
          sort(b.begin(),b.end());
          c.push_back(b.back());
        }
        for(auto x : c) cout << x <<" ";
        cout <<'\n';
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        deque<int> dq;
        vector<int> c;
        for(int i = 0; i < n; i++){
            while(!dq.empty() && dq.front() <= i - k) dq.pop_front();
            while(!dq.empty() && a[dq.back()] < a[i]) dq.pop_back();
            dq.push_back(i);
            if(i >= k-1) c.push_back(a[dq.front()]);
        }
        for(auto x : c) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
*/