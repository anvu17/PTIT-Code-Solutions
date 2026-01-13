#include<iostream>
#include<algorithm>
using namespace std;

#define r 1000000
bool p[r+1];

void s(){
    fill(p,p+r+1,1);
    p[0]=p[1]=0;
    for(int i=2;i*i<=r;i++){
        if(p[i]){
            for(int j=i*i;j<=r;j+=i) p[j]=0;
        }
    }
}

main(){
    s();
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        int cnt=0;
        for(int i=1;i<=r&&(long long)i*i<=n;i++){
            if(p[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
}