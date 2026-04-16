#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long luythua (long long cs,long long mu){
	if(mu==0) return 1;
	if(mu==1){
		return cs % mod;
	}
	long long ketqua = luythua(cs,mu/2);
	if(mu%2==0){
		return (ketqua * ketqua) % mod;
	} else {
		return (((ketqua * ketqua) % mod )* cs) % mod;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		cout << luythua (n,k) << '\n';
	}
	return 0;
}
