#include <iostream>
using namespace std;

int digitSum(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        while(n>=10) n=digitSum(n);
        cout<<n<<'\n';
    }
}