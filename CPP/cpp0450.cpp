#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],ans=-1;
        unordered_set<int>f;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(f.count(a[i])){
                ans=a[i];
                break;
            }
            f.insert(a[i]);
        }
        cout<<ans<<'\n';
    }
}