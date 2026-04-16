#include<bits/stdc++.h>
using namespace std;
int solution (vector<int>&a , vector<int>&b){
    int i=0; int j=0;
    int pos ;
    while(i < a.size() && j <b.size()){
        if(a[i] == b[j]){
            i++;j++;
        } else if(a[i] != b[j]){
            pos = i+1;
            return pos;
        }
    }
    return a.size();
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m=n-1;
        vector<int> a(n);
        vector<int> b(m);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        cout << solution(a,b) <<'\n';
    }
    return 0;
}
/*
int solution(vector<int>& a, vector<int>& b){
    int ans = 0;
    for(int x : a) ans ^= x; // XOR tất cả phần tử a
    for(int x : b) ans ^= x; // XOR tất cả phần tử b
    return ans;               // còn lại phần tử duy nhất
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n-1);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        cout << solution(a,b) << '\n';
    }
    return 0;
}
*/
/*| A | B | A ^ B |
  | - | - | ----- |
  | 0 | 0 | 0     |
  | 0 | 1 | 1     |
  | 1 | 0 | 1     |
  | 1 | 1 | 0     |
  phép:hoặc (loại trừ)
*/
/*Giải thích từng bước:
ans = 0 → khởi tạo.
Duyệt mảng a:
ans ^= x → XOR ans với từng phần tử của a.
Duyệt mảng b:
ans ^= x → XOR ans với từng phần tử của b.
Vì tất cả các phần tử giống nhau sẽ triệt tiêu nhau (x ^ x = 0),
phần tử duy nhất xuất hiện chỉ trong a sẽ còn lại trong ans.
(x ^= y;  // tương đương với x = x ^ y;)
(Nó lấy giá trị hiện tại của x, XOR với y, sau đó gán lại cho x.)
*/