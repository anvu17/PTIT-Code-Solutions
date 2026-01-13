#include<iostream>
#include<iomanip>
#include<algorithm>
#include<sstream>
#include<cctype>
using namespace std;

struct SinhVien{
    string ma,ten,lop,ns;
    float gpa;
};

string chuanTen(string s){
    stringstream ss(s);
    string w,res="";
    while(ss>>w){
        for(char&c:w) c=tolower(c);
        w[0]=toupper(w[0]);
        if(res!="") res+=" ";
        res+=w;
    }
    return res;
}

string chuanNgay(string s){
    if(s[1]=='/') s='0'+s;
    if(s[4]=='/') s.insert(3,"0");
    return s;
}

void nhap(SinhVien ds[],int n){
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin,ds[i].ten);
        cin>>ds[i].lop>>ds[i].ns>>ds[i].gpa;
        cin.ignore();
        stringstream ss;
        ss<<"B20DCCN"<<setw(3)<<setfill('0')<<i+1;
        ds[i].ma=ss.str();
        ds[i].ten=chuanTen(ds[i].ten);
        ds[i].ns=chuanNgay(ds[i].ns);
    }
}

void sapxep(SinhVien ds[],int n){
    sort(ds,ds+n,[](SinhVien a,SinhVien b){return a.gpa>b.gpa;});
}

void in(SinhVien ds[],int n){
    for(int i=0;i<n;i++){
        cout<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].ns<<" "
            <<fixed<<setprecision(2)<<ds[i].gpa<<'\n';
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}