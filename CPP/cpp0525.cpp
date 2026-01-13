#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

struct stu{
    string id,name,cls;
    double s1,s2,s3;
};

int main(){
    int n; cin>>n; cin.ignore();
    stu a[n];
    for(int i=0;i<n;i++){
        getline(cin,a[i].id);
        getline(cin,a[i].name);
        getline(cin,a[i].cls);
        cin>>a[i].s1>>a[i].s2>>a[i].s3;
        cin.ignore();
    }
    sort(a,a+n,[](stu&a,stu&b){
        return a.name<b.name;
    });
    for(int i=0;i<n;i++){
        cout<<i+1<<' '<<a[i].id<<' '<<a[i].name<<' '<<a[i].cls<<' '
            <<fixed<<setprecision(1)<<a[i].s1<<' '<<a[i].s2<<' '<<a[i].s3<<'\n';
    }
}