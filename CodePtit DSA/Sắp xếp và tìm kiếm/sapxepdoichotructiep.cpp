#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin >> n;
		int a[10001];
		int dem =1;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n-1;i++){
			for(int j = i+1;j<n;j++){
				if(a[j] < a[i]){
					swap (a[i] , a[j]);
				}
		}
		cout << "Buoc "<<dem<<": ";
			for(int o=0;o<n;o++){
				cout << a[o] <<" ";
			}
			cout <<'\n';
		dem++;
		}
		return 0;
}
