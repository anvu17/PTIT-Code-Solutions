// Kiểm tra chuỗi có phải địa chỉ IPv4 hợp lệ hay không
#include<bits/stdc++.h>
using namespace std;

bool ip(string s){
    stringstream ss(s);
    string p;
    int cnt=0;
    while(getline(ss,p,'.')){
        cnt++;
        if(cnt>4) return 0;
        if(p.empty()) return 0;
        for(char c:p) if(!isdigit(c)) return 0;
        //if(p.size()>1&&p[0]=='0') return 0;
        if(p.size()>3) return 0;
        int n=stoi(p);
        if(n<0||n>255) return 0;
    }
    return cnt==4;
}

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<(ip(s)?"YES":"NO")<<endl;
    }
}