#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        priority_queue<long long ,vector<long long> ,greater<long long>> a;
        for(int i=0;i<n;i++) {
            int x; cin >> x;
            a.push(x);
        }
        long long sum=0;
        while(a.size()>1){
            long long c= a.top(); a.pop();
            long long d= a.top(); a.pop();
            long long g=c+d;
            sum+=g;
            a.push(g);
        }
        cout << sum <<'\n';
    }
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[1001];
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int sum=0;
        vector<int> v(a,a+n);
        while(v.size()>1){
            int c= v[0]+v[1];
            sum+=c;
            v.erase(v.begin());
            v.erase(v.begin());
            v.push_back(c);
            sort(v.begin(),v.end());
        }
        cout << sum <<'\n';
    }
    return 0;
}*/