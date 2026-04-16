#include<bits/stdc++.h>
using namespace std;
int modulo =1e9+7;
vector<int> fibo(1000000001,-1);
long long fibonaci (long long n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(fibo[n]!=-1) return fibo[n];
    return fibo[n]=(fibonaci(n-1)+fibonaci(n-2)) % modulo;
}
int main(){
    fibonaci(1000000001);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << fibo[n-1] <<'\n';
    }
    return 0;
}