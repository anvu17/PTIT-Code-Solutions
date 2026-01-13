#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

struct item{
    int id;
    string name,group;
    double buy,sell,profit;
};

int main(){
    int n; cin>>n; item a[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        a[i].id=i+1;
        getline(cin,a[i].name);
        getline(cin,a[i].group);
        cin>>a[i].buy>>a[i].sell;
        a[i].profit=a[i].sell-a[i].buy;
        cin.ignore();
    }
    sort(a,a+n,[](item x,item y){
        return x.profit>y.profit;
    });
    for(int i=0;i<n;i++){
        cout<<a[i].id<<' '<<a[i].name<<' '<<a[i].group<<' '
            <<fixed<<setprecision(2)<<a[i].profit<<'\n';
    }
}