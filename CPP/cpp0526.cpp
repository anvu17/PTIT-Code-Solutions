#include<iostream>
#include<algorithm>
using namespace std;

struct p{
    string n;
    int d,m,y;
};

bool cmp(p a,p b){
    if(a.y!=b.y) return a.y<b.y;
    if(a.m!=b.m) return a.m<b.m;
    return a.d<b.d;
}

int main(){
    int n; cin>>n; p a[n];
    for(int i=0;i<n;i++){
        char c;
        cin>>a[i].n>>a[i].d>>c>>a[i].m>>c>>a[i].y;
    }
    sort(a,a+n,cmp);
    cout<<a[n-1].n<<'\n'<<a[0].n;
}
