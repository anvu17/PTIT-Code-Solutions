#include<iostream>
using namespace std;

class NhanVien{
    private: string manv,ten,gioitinh,ngaysinh,diachi,mst,ngaykyhd;
    public:
        friend istream &operator>>(istream &in,NhanVien &a){
            a.manv="00001";
            getline(in,a.ten);
            getline(in,a.gioitinh);
            getline(in,a.ngaysinh);
            getline(in,a.diachi);
            getline(in,a.mst);
            getline(in,a.ngaykyhd);
            return in;
        }
        friend ostream &operator<<(ostream &out,const NhanVien &a){
            out<<a.manv<<' '<<a.ten<<' '<<a.gioitinh<<' '
                <<a.ngaysinh<<' '<<a.diachi<<' '<<a.mst<<' '
                <<a.ngaykyhd;
            return out;
        }
};

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}