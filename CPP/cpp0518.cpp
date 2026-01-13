#include<iostream>
#include<iomanip>
#include<algorithm>
#include<sstream>
using namespace std;

struct NhanVien{
    string id,name,sex,birth,addr,tax,contract;
    int d,m,y;
};

void tach(NhanVien&a){
    char c;
    stringstream ss(a.birth);
    ss>>a.m>>c>>a.d>>c>>a.y;
}

void nhap(NhanVien&a){
    static int cnt=1;
    getline(cin>>ws,a.name);
    getline(cin,a.sex);
    getline(cin,a.birth); tach(a);
    getline(cin,a.addr);
    getline(cin,a.tax);
    getline(cin,a.contract);
    stringstream ss;
    ss<<setw(5)<<setfill('0')<<cnt++;
    a.id=ss.str();
}

void sapxep(NhanVien ds[],int n){
    sort(ds,ds+n,[](NhanVien a,NhanVien b){
        if(a.y!=b.y) return a.y<b.y;
        if(a.m!=b.m) return a.m<b.m;
        return a.d<b.d;
    });
}

void inds(NhanVien ds[],int n){
    for(int i=0;i<n;i++){
        cout<<ds[i].id<<' '<<ds[i].name<<' '<<ds[i].sex<<' '<<ds[i].birth
            <<' '<<ds[i].addr<<' '<<ds[i].tax<<' '<<ds[i].contract<<'\n';

    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}