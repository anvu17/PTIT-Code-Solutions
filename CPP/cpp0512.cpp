#include<iostream>
#include<algorithm>
using namespace std;

struct PhanSo{
    long long tu,mau;
};

void rutgon(PhanSo &a){
    long long g=__gcd(a.tu,a.mau);
    a.tu/=g; a.mau/=g;
}

PhanSo cong(PhanSo a,PhanSo b){
    PhanSo c{a.tu*b.mau+b.tu*a.mau,a.mau*b.mau};
    rutgon(c);
    return c;
}

PhanSo nhan(PhanSo a,PhanSo b){
    PhanSo c{a.tu*b.tu,a.mau*b.mau};
    rutgon(c);
    return c;
}

void process(PhanSo a,PhanSo b){
    rutgon(a); rutgon(b);
    PhanSo c=cong(a,b); c=nhan(c,c);
    PhanSo d=nhan(nhan(a,b),c);
    cout<<c.tu<<'/'<<c.mau<<' '<<d.tu<<'/'<<d.mau<<'\n';
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}