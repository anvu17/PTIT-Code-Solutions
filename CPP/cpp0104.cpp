#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    long long s=0,p=1;
    for(int i = 1; i <= n; i++) s+=(p*=i);
    cout<<s;
}