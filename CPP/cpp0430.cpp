#include<iostream>
#include<set>
#include<climits>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,x,l=INT_MAX,r=INT_MIN; cin>>n;
        set<int> s;
        while(n--){
            cin>>x; s.insert(x);
            l=min(l,x);
            r=max(r,x);
        }
        cout<<(r-l+1-s.size())<<'\n';
    }

}