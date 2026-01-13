#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int min1=1e7,min2=1e7,x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<min1){
                min2=min1;
                min1=x;
            }
            else if(x>min1&&x<min2) min2=x;
        }
        if(min2==1e7) cout<<-1<<'\n';
        else cout<<min1<<' '<<min2<<'\n';
    }
}