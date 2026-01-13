#include<iostream>
#include<iomanip>
#include<sstream>
#include<algorithm>
using namespace std;

struct gv{
    string id,ten,bm;
};

string mabm(string a){
    stringstream ss(a);
    string w,r;
    while(ss>>w) r+=toupper(w[0]);
    return r;
}

string lower(string a){
    string r=a;
    for(auto&c:r) c=tolower(c);
    return r;
}

int main(){
    int n; cin>>n; cin.ignore();
    gv a[n];
    for(int i=0;i<n;i++){
        stringstream ss;
        ss<<"GV"<<setw(2)<<setfill('0')<<(i+1);
        a[i].id=ss.str();
        getline(cin,a[i].ten);
        string bm; getline(cin,bm);
        a[i].bm=mabm(bm);
    }
    int q; cin>>q; cin.ignore();
    while(q--){
        string k; getline(cin,k);
        string k1=lower(k);
        cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<k<<":\n";
        for(auto&x:a){
            if(lower(x.ten).find(k1)!=string::npos){
                cout<<x.id<<' '<<x.ten<<' '<<x.bm<<'\n';
            }
        }
    }
}