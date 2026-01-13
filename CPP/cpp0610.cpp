#include<iostream>
#include<algorithm>
using namespace std;

class PhanSo{
	private:
		long long t,m;
	public:
		PhanSo(long long tu=0,long long mau=1){
			t=tu; m=mau;
		}
		friend istream&operator>>(istream&in,PhanSo&a){
			in>>a.t>>a.m;
			return in;
		}
		friend ostream&operator<<(ostream&out,PhanSo a){
			out<<a.t<<'/'<<a.m;
			return out;
		}
		PhanSo operator+(PhanSo a){
			PhanSo kq;
			kq.t=t*a.m+a.t*m;
			kq.m=m*a.m;
			long long g=__gcd(kq.t,kq.m);
			kq.t/=g;
			kq.m/=g;
			return kq;
		}
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}