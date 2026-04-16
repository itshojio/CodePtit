#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<string> ten(n);
	for(int i=0;i<n;i++){
		cin >> ten[i];
	}
	string tendau ;
	cin >> tendau;
	vector<string> rest ;
	for(auto &x : ten)
		if(x != tendau ) rest.push_back(x);
		sort(rest.begin(),rest.end());
	do {
		cout << tendau;
		for(auto &x : rest ) cout << " "<< x;
		cout <<'\n';
	} while (next_permutation(rest.begin(),rest.end()));
	return 0;
}
