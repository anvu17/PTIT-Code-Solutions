#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct ThiSinh{
    string t,ns;
    float d1,d2,d3,dt;
};

void nhap(ThiSinh &a){
    getline(cin,a.t);
    getline(cin,a.ns);
    cin>>a.d1>>a.d2>>a.d3;
    a.dt=a.d1+a.d2+a.d3;
}

void in(ThiSinh a){
    cout<<a.t<<' '<<a.ns<<' '<<fixed<<setprecision(1)<<a.dt;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}