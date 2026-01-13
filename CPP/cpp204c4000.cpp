#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SinhVien{
    string ten,lop,ngaysinh;
    float gpa;
};

void nhap(SinhVien &a){
    getline(cin,a.ten);
    cin>>a.lop>>a.ngaysinh>>a.gpa;
    if(a.ngaysinh[1]=='/') a.ngaysinh='0'+a.ngaysinh;
    if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
}

void in(SinhVien a){
    cout<<"B20DCCN001 "<<a.ten<<' '<<a.lop<<' '<<a.ngaysinh<<' '<<fixed<<setprecision(2)<<a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}