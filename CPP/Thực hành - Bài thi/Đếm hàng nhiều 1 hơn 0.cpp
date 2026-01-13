#include<bits/stdc++.h>
using namespace std;
main(){
    int n; cin>>n; int cnt=0;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int o=a+b+c;
        if(o>3-o) cnt++;
    }
    cout<<cnt;
}