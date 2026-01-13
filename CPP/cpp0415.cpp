#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        long long max=-1e18,min=1e18,x;
        while(n--){
            cin>>x;
            if(x>max) max=x;
        }
        while(m--){
            cin>>x;
            if(x<min) min=x;
        }
        cout<<max*min<<'\n';
    }
}