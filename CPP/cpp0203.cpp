#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_set<int>a;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x>0) a.insert(x);
        }
        for(int i=1;i<=n+1;i++){
            if(a.find(i)==a.end()){
                cout<<i<<'\n';
                break;
            }
        }
    }
}