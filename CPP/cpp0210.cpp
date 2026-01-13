#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n; int a[n];
        for(int &x:a) cin>>x;
        int max_d=-1,min_v=a[0];
        for(int i=1;i<n;i++){
            if(a[i]-min_v>max_d) max_d=a[i]-min_v;
            if(a[i]<min_v) min_v=a[i];
        }
        cout<<max_d<<'\n';
    }
}