#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo{
    long long t,m;
};

void nhap(PhanSo &p){
    cin>>p.t>>p.m;
}

void rutgon(PhanSo &p){
    long long g = __gcd(p.t,p.m);
    p.t/=g;
    p.m/=g;
}

void in(PhanSo p){
    cout<<p.t<<'/'<<p.m;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}