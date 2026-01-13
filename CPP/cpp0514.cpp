#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;

struct SinhVien{
    string msv,ten,lop,ns;
    float gpa;
};

string chuanHoaTen(string s){
    string res,tmp;
    stringstream ss(s);
    while(ss>>tmp){
        tmp[0]=toupper(tmp[0]);
        for(int i=1;i<tmp.size();i++) tmp[i]=tolower(tmp[i]);
        if(!res.empty()) res+=" ";
        res+=tmp;
    }
    return res;
}

void nhap(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        a[i].msv=string("B20DCCN")+(i<9?"00":"0")+to_string(i+1);
        cin.ignore();
        getline(cin,a[i].ten);
        a[i].ten=chuanHoaTen(a[i].ten);
        cin>>a[i].lop>>a[i].ns>>a[i].gpa;
        if(a[i].ns[1]=='/') a[i].ns='0'+a[i].ns;
        if(a[i].ns[4]=='/') a[i].ns.insert(3,"0");
    }
}

void in(SinhVien a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i].msv<<' '<<a[i].ten<<' '<<a[i].lop<<' '<<a[i].ns<<' '<<fixed<<setprecision(2)<<a[i].gpa<<'\n';
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}