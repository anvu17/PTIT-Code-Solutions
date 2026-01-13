#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;

class SinhVien{
	private:
		string ma,ten,lop,ns;
		float gpa;
	public:
		SinhVien(){
			ma="B20DCCN001";
			ten=lop=ns="";
			gpa=0;
		}
		friend istream&operator>>(istream&in,SinhVien&a){
			getline(in,a.ten);
			getline(in,a.lop);
			getline(in,a.ns);
			in>>a.gpa;
			
			stringstream ss(a.ten);
			string tu,kq;
			while(ss>>tu){
				tu[0]=toupper(tu[0]);
				for(int i=1;i<tu.size();i++){
					tu[i]=tolower(tu[i]);
				}
				kq+=tu+' ';
			}
			kq.pop_back();
			a.ten=kq;
			
			if(a.ns[1]=='/') a.ns="0"+a.ns;
			if(a.ns[4]=='/') a.ns.insert(3,"0");
			
			return in;
		}
		friend ostream&operator<<(ostream&out,SinhVien a){
			out<<a.ma<<' '<<a.ten<<' '<<a.lop<<' '<<a.ns<<' '<<fixed<<setprecision(2)<<a.gpa;
			return out;
		}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}