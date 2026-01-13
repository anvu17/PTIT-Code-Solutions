#include <iostream>
#include <string>
using namespace std;

struct NhanVien{
    string ten,gioitinh,ngaysinh,diachi,mst,ngaykyhd;
};

void chuanhoa(string &s){
    if(s[1]=='/') s='0'+s;
    if(s[4]=='/') s.insert(3,"0");
}

void nhap(NhanVien &a){
    getline(cin,a.ten);
    getline(cin,a.gioitinh);
    getline(cin,a.ngaysinh); chuanhoa(a.ngaysinh);
    getline(cin,a.diachi);
    getline(cin,a.mst);
    getline(cin,a.ngaykyhd); chuanhoa(a.ngaykyhd);
}

void in(NhanVien a){
    cout<<"00001 "<<a.ten<<' '<<a.gioitinh<<' '<<a.ngaysinh<<' '<<a.diachi<<' '<<' '<<a.mst<<' '<<a.ngaykyhd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}