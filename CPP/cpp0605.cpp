#include<iostream>
#include<algorithm>
using namespace std;

class PhanSo{
    private: long long tu,mau;
    public:
        PhanSo(long long t,long long m): tu(t),mau(m){};
        void rutgon(){
            long long g=__gcd(tu,mau);
            tu/=g; mau/=g;
        }
        friend istream& operator>>(istream &is,PhanSo &a){
            is>>a.tu>>a.mau;
            return is;
        }
        friend ostream& operator<<(ostream &os,const PhanSo &a){
            os<<a.tu<<'/'<<a.mau;
            return os;
        }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}