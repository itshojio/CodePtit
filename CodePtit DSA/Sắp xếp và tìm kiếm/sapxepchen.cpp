#include<bits/stdc++.h>
using namespace std;
int main(){
/*	int t;
	cin >> t;
	while(t--){*/
		int n;
		cin >> n;
		int t = 1;
		int a[10001];
		for(int i=0;i<n;i++) cin >> a[i];
		cout << "Buoc 0: " <<a[0] <<'\n';
		for (int i=1;i<n;i++){
			int key=a[i];
			int j=i-1;
			while( j >=0 && a[j] > key){
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = key;
			cout << "Buoc "<< t <<": ";
			for(int o=0;o<=i;o++){
				cout << a[o] <<" ";
			}
			cout <<'\n';
			t++;
		}
//	}
	return 0;
}
