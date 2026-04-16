#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int dem =0;
bool ktra = true;
vector<int>a;
int pos;
void vao (){
    cin >> n >> k >> s;
    a.resize(k);
    for(int i=0;i<=n-k+1;i++){
        int first = i+1;
        int sum = first;
        int k1=k-1,n1=n;
        while(k1>0 && n1 > first){
            sum += n1;
            n1--;;
            k1--;
        }
        if( k1 > 0) continue;
        if(sum < s) continue;
        pos=first;
        break;
    }
    a[0]=pos;
    for(int i=1;i<k;i++){
        a[i]=a[i-1]+1;
    }
}
void ra (){
     int sum = 0;
     for(auto x : a) sum+=x;
     if(sum == s) dem++;
}
void sinh (){
    int i=k-1;
    while(i >= 1 && a[i] == n-k+i+1) i--; 
    if(i>=1){
        a[i]+=1;
        for(int j=i+1;j<k;j++){
            a[j]=a[i]+j-i;
        }
    } else {
        ktra = false;
    }
}
/*
Về thuật toán (điểm mấu chốt)
a[0] không chỉ là một biến
Nó đại diện cho nhánh tổ hợp đang duyệt
->Kết luận cần nhớ
Sinh toàn bộ → cho i >= 0
Cố định phần tử đầu → chỉ cho i >= 1
Cố định m phần tử đầu → i >= m
👉 Không phải “không gán được”, mà là gán như vậy làm bài toán đổi sang bài khác.
*/
int main(){
    while (cin >> n >> k >> s) {
        dem = 0;
        ktra = true;
        a.clear();
        vao();
        while (ktra) {
            ra();
            sinh();
        }
        cout << dem << '\n';
    }
    return 0;
}
/*---------------------------------BÀI GIẢI CHUẨN-----------------------------------*/
#include<bits/stdc++.h>
using namespace std;

int n, k, s;
int dem;
int a[15];

void dfs(int idx, int last, int sum){
    if(idx == k){
        if(sum == s) dem++;
        return;
    }

    for(int x = last + 1; x <= n; x++){
        // cắt nhánh theo min / max
        int remain = k - idx - 1;

        // tổng nhỏ nhất có thể đạt
        int minSum = sum + x;
        for(int i = 1; i <= remain; i++)
            minSum += x + i;

        // tổng lớn nhất có thể đạt
        int maxSum = sum + x;
        for(int i = 0; i < remain; i++)
            maxSum += n - i;

        if(minSum > s) break;      // càng về sau càng lớn
        if(maxSum < s) continue;   // chọn x này không đủ lớn

        dfs(idx + 1, x, sum + x);
    }
}

int main(){
    while(true){
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) break;

        dem = 0;
        dfs(0, 0, 0);
        cout << dem << '\n';
    }
    return 0;
}
