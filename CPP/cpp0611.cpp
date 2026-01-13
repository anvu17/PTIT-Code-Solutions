#include<bits/stdc++.h>
using namespace std;

int cnt;

class SinhVien{
    private:
        string msv,ten,lop,ns;
        float gpa;
    public:
        SinhVien(){
            msv=ten=lop=ns="";
            gpa=0;
        }
        friend istream&operator>>(istream&in,SinhVien&a){
            getline(in>>ws,a.ten);
            getline(in,a.lop);
            getline(in,a.ns);
            if(a.ns[1]=='/') a.ns='0'+a.ns;
            if(a.ns[4]=='/') a.ns.insert(3,"0");
            in>>a.gpa;
            cnt++;
            stringstream ss;
            ss<<"B20DCCN"<<setw(3)<<setfill('0')<<cnt;
            a.msv=ss.str();
            return in;
        }
        friend ostream&operator<<(ostream&out,SinhVien&a){
            out<<a.msv<<' '<<a.ten<<' '<<a.lop<<' '<<a.ns<<' '
                <<fixed<<setprecision(2)<<a.gpa<<'\n';
            return out;
        }
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}