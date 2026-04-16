#include<bits/stdc++.h>
using  namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[21];
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        string c="";
        string b="";
        if(n%2==0){
            for(int i=0;i<n-1;i+=2){
            c+=to_string(a[i]);
            b+=to_string(a[i+1]);
        }
        } else {
            for(int i=0;i<n-2;i+=2){
            c+=to_string(a[i]);
            b+=to_string(a[i+1]);
        }
        c += to_string(a[n-1]);
        }
        
        long long so1 = stoll(c);
        long long so2 = stoll(b);
        cout << so1+so2 <<'\n';
    }
    return 0;
}