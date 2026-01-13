#include<iostream>
#include<algorithm>
using namespace std;

struct student{
    int ord;
    string id,name,cls,mail,co;
};

int main(){
    int n; cin>>n; cin.ignore();
    student a[n];
    for(int i=0;i<n;i++){
        a[i].ord=i+1;
        getline(cin,a[i].id);
        getline(cin,a[i].name);
        getline(cin,a[i].cls);
        getline(cin,a[i].mail);
        getline(cin,a[i].co);
    }
    sort(a,a+n,[](student a,student b){
        return a.name<b.name;
    });
    int q; cin>>q;
    while(q--){
        string qs; cin>>qs; cin.ignore();
        for(int i=0;i<n;i++){
            if(a[i].co==qs){
                cout<<a[i].ord<<' '<<a[i].id<<' '<<a[i].name<<' '<<a[i].cls<<' '<<a[i].mail<<' '<<a[i].co<<'\n';
            }
        }
        cout<<'\n';
    }
}