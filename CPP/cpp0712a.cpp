/*
SINH TỔ HỢP CHẬP K CỦA 1,2,...,N
- Giả sử cấu hình hiện tại là X=(x[1],x[2],...,x[n])
- Điều kiện dừng: x[i]=n-k+i với mọi i=1,2,...,k
(cấu hình có phần tử lớn nhất có thể theo thứ tự
từ điển)
- Gọi t là chỉ số lớn nhất sao cho x[t]<n-k+t
(tìm vị trí t mà phần tử xt tại đó chưa đạt giá trị
giới hạn trên n-k+t (tức là xt có thể tăng lên
đến giá trị đó))
- Cấu hình tiếp theo Y=(y[1],y[2],...,y[k]) như sau:
+ y[i]=x[i] với i<t
(giữ nguyên các phần tử ở vị trí 1 đến t-1)
+ y[t]=x[t]+1
(tăng giá trị của phần tử tại vị trí t lên 1 đơn vị)
+ y[i]=y[t]+(i-t) với i>t
(gán các phần tử từ t+1 đến k các giá trị nhỏ nhất
có thể sao cho chúng lớn hơn yt và tăng dần,
cụ thể y[t+1]=y[t]+1, y[t+2]=y[t]+2,...)
*/

#include<iostream>
using namespace std;
void gen(int n,int k){
    int x[100]={};
    // Cấu hình đầu tiên:
    for(int i=1;i<=k;i++) x[i]=i;
    while(1){
        // In cấu hình hiện tại:
        for(int i=1;i<=k;i++) cout<<x[i];
        cout<<" ";
        // Duyệt từ phải sang trái,
        // tìm vị trí t lớn nhất sao cho x[t]<n-k+t
        int t=k;
        while(t>0&&x[t]==n-k+t) t--;
        // Không tìm được t => cấu hình cuối
        if(t==0) break;
        // Sinh cấu hình tiếp theo:
        x[t]++; // Tăng giá trị phần tử tại t lên 1
        for(int i=t+1;i<=k;i++) x[i]=x[t]+(i-t); // gán các phần tử sau t giá trị nhỏ nhất có thể để đảm bảo dãy tăng chặt
    }
    cout<<endl;
}
main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k; gen(n,k);
    }
}