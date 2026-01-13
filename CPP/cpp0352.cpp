#include<iostream>
#include<cctype>
#include<sstream>
#include<vector>
#include<map>
using namespace std;

int main(){
    int n; cin>>n; cin.ignore();
    map<string,int>cnt;
    while(n--){
        string name,word; getline(cin,name);
        stringstream ss(name);
        vector<string>v;
        while(ss>>word) v.push_back(word);

        string username;
        for(char c:v.back()) username+=tolower(c);
        for(int i=0;i+1<v.size();i++) username+=tolower(v[i][0]);
        
        cout<<username;
        if(cnt[username]) cout<<cnt[username]+1;
        cnt[username]++; 
        cout<<"@ptit.edu.vn\n";
    }
}