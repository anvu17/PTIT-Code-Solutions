#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int>a(n),b(m);
        for(int&i:a) cin>>i;
        for(int&i:b) cin>>i;

        vector<int>u;
        set_union(a.begin(),a.end(),b.begin(),b.end(),back_inserter(u));
        for(int x:u) cout<<x<<' ';
        cout<<'\n';

        vector<int>i;
        set_intersection(a.begin(),a.end(),b.begin(),b.end(),back_inserter(i));
        for(int x:i) cout<<x<<' ';
        cout<<'\n';
    }
}