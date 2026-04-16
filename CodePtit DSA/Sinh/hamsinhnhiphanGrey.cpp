#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001];
bool ktra = true;
int step=0;
void dulieuvao (void){
    cin  >> n;
    for(int i=1;i<=n;i++) a[i]=0;
}    
void ketqua (void){
	for(int i=1;i<=n;i++){
		cout << a[i];
	}
	cout <<" ";
}
void hamsinhnhiphan (void){
	step++;
	if(step >= (1 << n)) {
		ktra=false;
		return ;
	} 
	int p=1;
	while(((step >> (p-1)) & 1) ==0)p++;
	int idx =n-p+1;
	a[idx] = 1-a[idx];
}
int main(){
	int t;
	cin >> t;
	while(t--){
	dulieuvao();
	ktra=true;
	step=0;
	while(ktra){
		ketqua();
		hamsinhnhiphan();
    	}
    	cout <<'\n';
	}
	return 0;
}
