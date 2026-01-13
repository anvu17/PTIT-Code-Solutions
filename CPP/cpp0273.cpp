#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n];
        long long s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        long long l=0;
        int ans=-1;
        for(int i=0;i<n;i++){
            if(l*2+a[i]==s){
                ans=i+1;
                break;
            }
            l+=a[i];
        }
        cout<<ans<<'\n';
    }
}