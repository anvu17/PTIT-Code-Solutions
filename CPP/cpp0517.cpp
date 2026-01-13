#include<iostream>
#include<iomanip>
using namespace std;

struct NhanVien{
    string ten,gioi,ns,dc,mst,hd;
};

void nhap(NhanVien &a){
    static bool nv_dau=1;
    if(nv_dau){
        cin.ignore();
        nv_dau=0;
    }
    getline(cin,a.ten);
    getline(cin,a.gioi);
    getline(cin,a.ns);
    getline(cin,a.dc);
    getline(cin,a.mst);
    getline(cin,a.hd);
}

void inds(NhanVien ds[],int n){
    for(int i=0;i<n;i++){
        cout<<setw(5)<<setfill('0')<<i+1<<' ';
        cout<<ds[i].ten<<' '<<ds[i].gioi<<' '<<ds[i].ns<<' '<<ds[i].dc<<' '<<ds[i].mst<<' '<<ds[i].hd<<'\n';
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}