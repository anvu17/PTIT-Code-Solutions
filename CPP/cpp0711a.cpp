/*
QUAY LUI XÂY DỰNG XÂU NHỊ PHÂN ĐỘ DÀI N
Xây dựng xâu từ trái sang phải:
- Ở vị trí thứ i, thử lần lượt:
+ x[i]=0
+ x[i]=1
- Sau khi gán:
+ Nếu i=n => đã đủ độ dài => in kết quả
+ Nếu i<n => tiếp tục sang vị trí i+1

Ví dụ với n=3:
Try(1)
├─ 0 → Try(2)
│   ├─ 0 → Try(3) → 000, 001
│   └─ 1 → Try(3) → 010, 011
└─ 1 → Try(2)
    ├─ 0 → Try(3) → 100, 101
    └─ 1 → Try(3) → 110, 111
*/
#include<iostream>
using namespace std;
int n,x[100];
void Res(){
    for(int i=1;i<=n;i++) cout<<x[i];
    cout<<' ';
}
void Try(int i){
    for(int j=0;j<=1;j++){
        x[i]=j;
        if(i==n) Res();
        else Try(i+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n; Try(1);
        cout<<endl;
    }
}