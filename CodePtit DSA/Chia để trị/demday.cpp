#include<bits/stdc++.h>
using namespace std;
long long m = 123456789;
long long luythua (long long cs,long long mu){
	if(mu==1) return cs % m ;
	if(mu==0) return 1;
	long long kq=luythua(cs,mu/2);
	if(mu%2==0) return (kq*kq) % m;
	else return (((kq*kq)%m)*cs)%m;
}
int main(){
	int t; cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << luythua(2,n-1)<<'\n';
	}
	return 0;
}
