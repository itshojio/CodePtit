#include<bits/stdc++.h>
using namespace std;
int n,k,ktra = 1;
int a[1001];
void tohopdau (){
	cin >> n >> k;
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void ketqua (){
	for(int i=1;i<=k;i++){
		cout << a[i]<< " ";
	}
	cout <<'\n';
}
void hamsinhtohop (){
	int i=k;
	while(i > 0 && a[i] == n-k+i) i--;
	if( i > 0){
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++){
			a[j]=a[i]+j-i;
		}
	}
	else {
		ktra= 0;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		tohopdau();
	//	ktra = 1;
	while(ktra){
		ketqua();
		hamsinhtohop();
	}
	cout << '\n';
	}
	return 0;
}
