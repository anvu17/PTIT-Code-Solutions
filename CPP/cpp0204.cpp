#include<iostream>
using namespace std;

#define MAX 100000
bool prime[MAX+1];
int prefix[MAX+1];

int main(){
    for(int i=0;i<=MAX;i++) prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2;i*i<=MAX;i++){
        if(prime[i])
            for(int j=i*i;j<=MAX;j+=i) prime[j]=0;
    }
    for(int i=1;i<=MAX;i++) prefix[i]=prefix[i-1]+(prime[i]?1:0);
    
    int t; cin>>t;
    while(t--){
        int l,r; cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<'\n';
    }
}