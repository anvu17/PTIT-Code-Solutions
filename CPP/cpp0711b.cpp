/*
SINH CÁC XÂU NHỊ PHÂN CÓ ĐỘ DÀI N
THEO THỨ TỰ TỪ ĐIỂN

Biểu diễn xâu nhị phân dưới dạng b[1],b[2[],...,b[n]
(b[i] là 0 hoặc 1)

Biết rằng cấu hình đầu tiên là (0,0,...,0) - n số 0,
cấu hình cuối cùng là (1,1,...,1) - n số 1.

Thuật toán:
- Giả sử cấu hình hiện tại có dạng x[1]x[2]...x[n]
- Điều kiện kết thúc: x[i]=1 với mọi i (cấu hình cuối cùng)
- Gọi x[k] là chữ số 0 đầu tiên tính từ bên phải của x,
tức là: x=x[1]x[2]...x[k-1]011...1
- Cấu hình tiếp theo y=y[1]y[2]...y[n] được tạo ra như sau:
+ y[i]=x[i] với 1<=i<=k-1
(các vị trí bên trái k giữ nguyên)
+ y[i]=1-x[i] với k<=i<=n
(tại vị trí k, x[i]=0 => 1-x[i]=1 (đổi 0 thành 1),
từ k+1 đến n, x[i]=1 => 1-x[i]=0 (đổi phần sau về 0))
hay y=x[1]x[2]...x[k-1]100...0
*/

#include<iostream>
using namespace std;
void gen(int n){
    int x[100]={};
    while(1){
        // Xâu hiện tại:
        for(int i=0;i<n;i++) cout<<x[i];
        cout<<' ';
        // Tìm vị trí chữ số 0 đầu tiên tính từ phải:
        int p=n-1;
        while(p>=0&&x[p]==1) p--;
        // Không còn số 0 => xâu cuối (điều kiện dừng)
        if(p<0) break;
        // Đổi số 0 thành 1, còn phía sau đổi thành 0:
        for(int i=p;i<n;i++) x[i]=1-x[i];
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; gen(n);
    }
}