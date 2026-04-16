#include<bits/stdc++.h>
using namespace std;
int n,ktra=1;
vector<int>a;
void dulieuvao (void) {
	cin >> n;
	a.resize(n);
	for(int i= 0;i<n;i++){
		a[i]=6;
	}
}
bool hople (){
	if(a.size() < 6) return false;
	if(a[0] != 8 || a[n-1]!=6) return false;
	for(int i=0;i<n-1;i++){
		if(a[i]==8 && a[i+1]==8) return false;
	}
	for(int i=0;i<n-3;i++){
		if(a[i]==6 && a[i+1]==6 && a[i+2]==6 && a[i+3]==6) return false;
	}
	return true;
}
void ketqua (void){
	if(hople()){
		for(auto c : a){
			cout << c;
		}
		cout <<'\n';
	}
}
void hamsinh (void ){
	int i=n-1;
	while( i >= 0  && a[i]==8){
		a[i]=6;
		i--;
	}
	if(i >= 0){
		a[i]=8;
	} else {
		ktra = 0;
	}
}
int main(){
		dulieuvao();
		ktra=1;
		while(ktra){
			ketqua();
			hamsinh();
		}
	return 0;
}
