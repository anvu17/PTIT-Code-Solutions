/*
SINH HOÁN VỊ
- Hoán vị đầu tiên: 1,2,3,...,n
- Hoán vị cuối cùng: n,n-1,...,1

- Giả sử cấu hình hiện tại có dạng x1,x2,...,xn
- Điều kiện dừng: x[i-1]>x[i] với mọi i
(hoán vị cuối cùng)
- Gọi t là vị trí đầu tiên từ bên phải mà x[t-1]<x[t]
- Cấu hình tiếp theo có dạng y[1],y[2],..,y[n] như sau:
+ y[i]=x[i] với i<=t-2
(giữ nguyên các phần tử bên trái t-1)
+ y[t-1] bằng phần tử nhỏ nhất trong tập x[t],...,x[n]
và lớn hơn x[t-1]=a
(tìm giá trị nhỏ nhất lớn hơn a ở phía sau và
gán cho y[t-1])
+ y[t],...,y[n] là dãy sắp xếp tăng dàn gồm các số
trong tập {x[t-1],x[t],...,x[n]}\{a}
(sắp xếp tăng đoạn sau t)
*/

#include<iostream>
#include<algorithm>
using namespace std;
void gen(int n){
    int x[100]={};
    // Khởi tạo hoán vị đầu tiên:
    for(int i=1;i<=n;i++) x[i]=i;
    while(1){
        // Hoán vị hiện tại:
        for(int i=1;i<=n;i++) cout<<x[i];
        cout<<" ";
        // Tìm t là vị trí đầu tiên bên phải mà
        // x[t-1]<x[t]
        int t=n-1;
        while(t>0&&x[t]>x[t+1]) t--;
        // Không tìm được t => hoán vị cuối cùng
        if(t==0) break;
        int j;
        // Tìm j: phần tử đầu tiên lớn hơn x[t]
        for(j=n;j>t;j--){
            if(x[j]>x[t]) break;
        }
        // Tăng giá trị tại t 
        // lên mức nhỏ nhất có thể
        // (swap với giá trị nhỏ nhất phía sau):
        swap(x[t],x[j]);
        // Sắp xếp tăng đoạn sau t để được 
        // hoán vị kế tiếp nhỏ nhất
        sort(x+t+1,x+n+1);
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; gen(n);
    }
}