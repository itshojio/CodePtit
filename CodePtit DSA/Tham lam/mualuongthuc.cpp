#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;// 16 10 2
        if (n * 6 < 7 * m) {
            cout << -1 << "\n"; // Không đủ sống qua tuần
            continue;
        }
        int tongsolthuccan = s*m; //vd 10 * 2 =20
        int songaymuadutinh =tongsolthuccan / n; // 20 / 16 = 1 du 4 , lon hon 1 => 2 ngay
        if(tongsolthuccan % n > 0){
            songaymuadutinh+=1;
        }
        int songaymuatoida = s - (s/7); // vd 10 - (10/7) =9 
        if(songaymuadutinh > songaymuatoida ){
            cout << "-1"<<'\n';
        } else {
            cout <<songaymuadutinh <<'\n';
        }
    }
    return 0;
}