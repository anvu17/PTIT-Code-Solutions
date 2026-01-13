// Đếm từ bắt đầu bằng nguyên âm và dài hơn 3 ký tự
#include<bits/stdc++.h>
using namespace std;

int count(string s){
    stringstream ss(s);
    string w;
    int cnt=0;
    while(ss>>w){
        char c=tolower(w[0]);
        if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')&&w.size()>3)
            cnt++;
    }
    return cnt;
}

main(){
    string s; getline(cin,s);
    cout<<count(s);
}