/*
QUAY LUI SINH HOÁN VỊ
Xây dựng hoán vị từ trái qua phải:
- Ở vị trí thứ i, chọn x[i] sao cho:
+ x[i] chưa được dùng (used[j]=0)
- Sau khi gán:
+ Đánh dấu đã dùng
+ Nếu i=n => đã đủ n phần tử => in hoán vị
+ Nếu i<n => gọi tiếp Try(i+1)
+ Quay lui: used[j]=0 để thử số khác
Hoán vị không cần tăng dần, chỉ cần không lặp

Ví dụ với n=3:
Try(1)
├─ 1 → Try(2)
│   ├─ 2 → Try(3) → 123
│   └─ 3 → Try(3) → 132
├─ 2 → Try(2)
│   ├─ 1 → Try(3) → 213
│   └─ 3 → Try(3) → 231
└─ 3 → Try(2)
    ├─ 1 → Try(3) → 312
    └─ 2 → Try(3) → 321
*/

#include<iostream>
using namespace std;
int n,x[100];
bool used[100];
void Res(){
    for(int i=1;i<=n;i++) cout<<x[i];
    cout<<' ';
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!used[j]){
            x[i]=j;
            used[j]=1;
            if(i==n) Res();
            else Try(i+1);
            used[j]=0;
        }
    }
}
int main(){
    int t; cin>>t; while(t--){
        cin>>n; Try(1); cout<<'\n';
    }
}