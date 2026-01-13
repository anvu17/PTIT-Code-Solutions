#include<iostream>
#include<set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        set<int> s;
        long long x;
        while(n--){
            cin>>x;
            if(x==0) s.insert(0);
            while(x){
                s.insert(x%10);
                x/=10;
            }
        }
        for(int d:s) cout<<d<<' ';
        cout<<'\n';
    }
}