#include<bits/stdc++.h>
using namespace std;

void fileinout(){
	freopen("DT.INP","r",stdin);
	freopen("DT.OUT","w",stdout);
}

int main(){
	fileinout();
	int t;
	cin >> t;
	int n;
	cin >> n;
	vector<vector<int>> a(n,vector<int>(n));
	for (int i = 0 ; i < n ; i++){
		for (int j = 0 ; j < n ; j++){
			cin >> a[i][j];
		}
	}
	if (t == 1){
		vector<int> b;
		vector<int> degsign;
		vector<int> degunsign;
		for (int i = 0 ; i < n ; i++ ){
			int dem = 0;
			int c = 0;
			for (int j = 0 ; j < n ; j++){
				if (a[i][j] == 1){
					c += 1;
					if ( j > i){
						dem+=1;
					}
				}
			}
			degsign.push_back(dem);
			b.push_back(c);
		}
		canh = b;
		for (int j = 0 ; j < n ; j++ ){
			int dem = 0;
			for (int i = 0 ; i < n ; i++){
				if (a[i][j] == 1){
					dem += 1;
				}
			}
			degunsign.push_back(dem);
		}
		for (int i = 0; i < n ; i++ ){
			cout << degunsign[i] << " " << degsign[i] <<'\n';
		}
	} else {
		cout << n << '\n';
		for (int i = 0 ; i < n ; i ++){
			vector<int> k;
			int dem = 0 ;
			for (int j = 0; j < n ; j ++){
				if (a[i][j] == 1){
					k.push_back(j+1);
					dem += 1;
				}
			}
			cout << dem <<" ";
			for (auto x : k){
				cout << x <<" ";
			}
			cout <<'\n';
			k.clear();
		}
	}
	return 0;
}
