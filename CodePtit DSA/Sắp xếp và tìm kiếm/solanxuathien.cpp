#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n,m;
        cin >> n>> m;
        map<int,int> a;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a[x]++;
        }
        if(a.count(m)) cout << a[m] <<'\n';
        else cout <<-1<<'\n';
    }
    return 0;
}