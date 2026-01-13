#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPrime(int n){
    if(n<2) return 0;
    if(n%2==0) return n==2;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}

void gen(int n,int st,string cur,int dir,vector<int> &res){
    if(cur.size()==n){
        res.push_back(stoi(cur));
        return;
    }
    if(dir==1){
        for(int d=st;d<=9;d++){
            if(cur.empty()&&d==0) continue;
            gen(n,d+1,cur+char('0'+d),dir,res);
        }
    }
    else{
        for(int d=st;d>=0;d--){
            if(cur.empty()&&d==0) continue;
            gen(n,d-1,cur+char('0'+d),dir,res);
        }
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,cnt=0; cin>>n;
        vector<int> ns;
        gen(n,0,"",1,ns);
        gen(n,9,"",-1,ns);
        for(int x:ns) if(isPrime(x)) cnt++;
        cout<<cnt<<'\n';
    }
}