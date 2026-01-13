#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,cnt=0; cin>>n;
        int r=sqrt(n);
        for(int i=1;i<=r;i++){
            if(n%i==0){
                if(i%2==0) cnt++;
                int j=n/i;
                if(j%2==0&&j!=i) cnt++;
            }
        }
    cout<<cnt<<'\n';
    }
}