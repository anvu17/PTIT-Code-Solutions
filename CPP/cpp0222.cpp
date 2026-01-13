#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        unordered_map<int,int>f;
        for(int i=0;i<n;i++){
            set<int>r;
            for(int j=0;j<n;j++){
                int x; cin>>x;
                r.insert(x);
            }
            for(int x:r) f[x]++;
        }
        int ans=0;
        for(auto&[num,cnt]:f) if(cnt==n) ans++;
        cout<<ans<<'\n';
    }
}