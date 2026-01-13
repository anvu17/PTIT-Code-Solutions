#include<iostream>
#include<algorithm>
using namespace std;

struct t{
    int h,m,s;
};

bool cmp(t&a,t&b){
    if(a.h!=b.h) return a.h<b.h;
    if(a.m!=b.m) return a.m<b.m;
    return a.s<b.s;
}

int main(){
    int n; cin>>n;
    t a[n];
    for(int i=0;i<n;i++) cin>>a[i].h>>a[i].m>>a[i].s;
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++) cout<<a[i].h<<' '<<a[i].m<<' '<<a[i].s<<'\n';
}