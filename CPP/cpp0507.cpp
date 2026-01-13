#include<iostream>
#include<algorithm>
using namespace std;

struct PhanSo{
    long long tu,mau;
};

void nhap(PhanSo &p){
    cin>>p.tu>>p.mau;
}

PhanSo tong(PhanSo p,PhanSo q){
    PhanSo a;
    a.tu=p.tu*q.mau+q.tu*p.mau;
    a.mau=p.mau*q.mau;
    long long g=__gcd(a.tu,a.mau);
    a.tu/=g; a.mau/=g;
    return a;
}

void in(PhanSo p){
    cout<<p.tu<<'/'<<p.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}