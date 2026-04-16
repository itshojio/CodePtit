#include<bits/stdc++.h>
using namespace std;
int main(){
		int n;
		cin >> n;
		int a[10001];
		int dem =1;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n-1;i++){
			int mindex = i;
			for(int j = i+1;j<n;j++){
				if(a[j] < a[mindex]){
					mindex = j;
				}
			}
				swap (a[i] , a[mindex]);
			cout << "Buoc "<<dem<<": ";
			for(int o=0;o<n;o++){
				cout << a[o] <<" ";
			}
			cout <<'\n';
			dem++;
		}
		return 0;
}
