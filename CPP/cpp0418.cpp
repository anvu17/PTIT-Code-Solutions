#include<iostream>
#include<set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m,x; cin>>n>>m;
        set<int>a,b;
        for(int i=0;i<n;i++){
            cin>>x;
            a.insert(x);
        }
        for(int i=0;i<m;i++){
            cin>>x;
            b.insert(x);
        }

        // Union:
        set<int>u=a;
        u.insert(b.begin(),b.end());
        for(int x:u) cout<<x<<' ';
        cout<<'\n';

        // Intersection:
        for(int x:a) if(b.count(x)) cout<<x<<' ';
        cout<<'\n';
    }
}