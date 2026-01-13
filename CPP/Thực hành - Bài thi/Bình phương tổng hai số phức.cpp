// Tạo cấu trúc số phức, viết hai hàm bình phương tổng và hiển thị
#include<bits/stdc++.h>
using namespace std;

struct comp{
    double r,i;
};

comp sq_sum(comp a,comp b){
    comp s;
    s.r=a.r+b.r;
    s.i=a.i+b.i;
    comp res;
    res.r=s.r*s.r-s.i*s.i;
    res.i=2*s.r*s.i;
    return res;
}

void print(comp z){
    cout<<z.r<<(z.i>=0?" + ":" - ")<<fabs(z.i)<<'i';
}

main(){
    int t; cin>>t; while(t--){
        comp a,b; cin>>a.r>>a.i>>b.r>>b.i;
        comp ans=sq_sum(a,b);
        print(ans);
        cout<<endl;
    }
}