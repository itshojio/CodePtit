#include<bits/stdc++.h>
using namespace std;
unsigned long long lenF[94];
char ktu (long long n,long long i){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(i <= lenF[n-2]) return ktu(n-2,i);
	else return ktu (n-1,i-lenF[n-2]);
}
int main(){
	int t;
	cin >> t;
	lenF[1]= lenF[2]=1;
	for(int o =3;o<=93;o++){
		lenF[o]=lenF[o-2] + lenF[o-1];
	}
	while(t--){
		long long n;
		long long i;
		cin >> n>> i;
		cout << ktu(n,i) <<'\n';
	}
	return 0;
}
