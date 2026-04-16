#include<bits/stdc++.h>
using namespace std;
long long minsum (string &a,string &b){
    for(int i=0;i<a.size();i++){
        if(a[i] == '6'){
            a[i]='5';
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i] == '6'){
            b[i]='5';
        }
    }
    long long c = stoll(a);
    long long d = stoll(b);
    return (long long) c+d;
}
long long maxsum (string &a,string &b){
    for(int i=0;i<a.size();i++){
        if(a[i] == '5'){
            a[i]='6';
        }
    }
    for(int i=0;i<b.size();i++){
        if(b[i] == '5'){
            b[i]='6';
        }
    }
    long long c = stoll(a);
    long long d = stoll(b);
    return (long long) c+d;
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << minsum(a,b) <<" ";
    cout << maxsum(a,b);
    return 0;
}