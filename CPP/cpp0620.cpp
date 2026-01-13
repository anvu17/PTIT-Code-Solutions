#include<iostream>
#include<algorithm>
using namespace std;

struct sv{
    string ma,ten,lop,email;
};

bool cmp(sv a,sv b){
    if(a.lop!=b.lop) return a.lop<b.lop;
    return a.ma<b.ma;
}

int main(){
    int n; cin>>n; cin.ignore();
    sv a[n];
    for(int i=0;i<n;i++){
        getline(cin,a[i].ma);
        getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) cout<<a[i].ma<<' '<<a[i].ten<<' '<<a[i].lop<<' '<<a[i].email<<'\n';
}