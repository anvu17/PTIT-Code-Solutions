/*
CPP0339 - ĐẦU CUỐI GIỐNG NHAU:
    Với mỗi ký tự xuất hiện n lần trong xâu, có:
        * n xâu con 1 ký tự
        * C(2,n) = n(n-1)/2 xâu con tạo bởi việc chọn 2 vị trí của ký tự đó làm đầu và cuối xâu con
    => Tổng số xâu con thỏa mãn với ký tự đó = n(n+1)/2
    Cộng kết quả của tất cả các ký tự sẽ ra đáp án cuối cùng.
*/

#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int f[26]={},r=0;
        for(char c:s) f[c-'a']++;
        for(int i=0;i<26;i++) r+=f[i]*(f[i]+1)/2;
        cout<<r<<'\n';
    }
}