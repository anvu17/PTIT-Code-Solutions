#include<iostream>
using namespace std;

struct sv{
    string m,t,l,e;
};

int main(){
    int n; cin>>n; cin.ignore();
    sv a[n];
    for(int i=0;i<n;i++){
        getline(cin,a[i].m);
        getline(cin,a[i].t);
        getline(cin,a[i].l);
        getline(cin,a[i].e);
    }
    int q; cin>>q; cin.ignore();
    while(q--){
        string s; getline(cin,s);
        cout<<"DANH SACH SINH VIEN LOP "<<s<<":\n";
        for(int i=0;i<n;i++){
            if(a[i].l==s){
                cout<<a[i].m<<' '<<a[i].t<<' '<<a[i].l<<' '<<a[i].e<<'\n';
            }
        }
    }
}