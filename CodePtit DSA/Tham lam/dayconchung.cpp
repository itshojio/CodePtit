#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        vector<int> c(k);
        for(auto &d :  a) cin >> d;
        for(auto &d :  b) cin >> d;
        for(auto &d :  c) cin >> d;
        int q=0,w=0,e=0;
        bool ktra=false;
        while(q < n && w < m && e < k){
            if(a[q]==b[w] && a[q]==c[e]){
                cout << a[q] <<" ";
                q++;w++;e++;
                ktra=true;
            }
            else if(a[q] < b[w]) q++;
            else if(b[w] < c[e]) w++;
            else e++;
        }
        if(!ktra) cout <<"NO";
        cout <<'\n';
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
vector<int> trung (vector<int> &a ,vector<int> &b){
    map<int,int> check;
    for(auto c : a){
        check[c] = 1;
    }
    for(auto c : b){
        if(check[c]==1) check[c]=2;
    }
    vector<int> d;
    for(auto c : check) {
        if(c.second == 2 ) {
          d.push_back(c.first);
        }
    }
    return d;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        set<int> sa;
        set<int> sb;
        set<int> sc;
        for(int i=0;i<n;i++) {
            int x; cin >> x ;
            sa.insert(x); 
        }
        for(int i=0;i<m;i++) {
            int x; cin >> x ;
            sb.insert(x);
        }
        for(int i=0;i<k;i++) {
            int x; cin >> x ;
            sc.insert(x);
        }
        vector<int> a(sa.begin(),sa.end());
        vector<int> b(sb.begin(),sb.end()); 
        vector<int> c(sc.begin(),sc.end());
        vector <int> trung1  = trung(a,b);
        vector <int> trung2  = trung(trung1 , c);
        if(trung2.empty()) cout <<"No"<<'\n';
        else {
            for(auto x : trung2) cout <<x<<" ";
            cout <<'\n';
        }
    }
    return 0;
}*/