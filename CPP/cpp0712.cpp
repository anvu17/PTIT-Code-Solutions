/*
QUAY LUI SINH TỔ HỢP CHẬP K CỦA TẬP 1...N
Xây dựng tổ hợp từ trái sang phải:
- Ở vị trí thứ i, chọn x[i] sao cho:
+ x[i]>x[i-1] (đảm bảo tăng dần, không lặp)
+ x[i]<=n-k+i (đảm bảo còn đủ phần tử phía sau)
- Sau khi gán:
+ Nếu i=k => đã đủ k phần tử => in tổ hợp
+ Nếu i<k => tiếp tục sang vị trí i+1

Ví dụ với n=5,k=3:
Try(1)
├─ 1 → Try(2)
│   ├─ 2 → Try(3) → 123, 124, 125
│   ├─ 3 → Try(3) → 134, 135
│   └─ 4 → Try(3) → 145
├─ 2 → Try(2)
│   ├─ 3 → Try(3) → 234, 235
│   └─ 4 → Try(3) → 245
└─ 3 → Try(2)
    └─ 4 → Try(3) → 345
*/
#include<iostream>
using namespace std;
int n,k,x[100];
void Res(){
    for(int i=1;i<=k;i++) cout<<x[i];
    cout<<' ';
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) Res();
        else Try(i+1);
    }
}
int main(){
    int t; cin>>t; while(t--){
        cin>>n>>k; 
        Try(1);
        cout<<'\n';
    }
}