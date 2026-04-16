#include<bits/stdc++.h>
using namespace std;
#define BASE 1000000007
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        priority_queue <long long , vector<long long >,greater <long long>> v;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            v.push(x);
        }
        long long sum = 0;
        while(v.size() > 1){
            long long o = v.top() ; v.pop();
            long long u = v.top() ; v.pop();
            long long total = (o+u) % BASE;
            sum = (sum + total) % BASE;
            v.push(total);
        }
        cout << sum <<'\n' ;
    }
    return 0;
}