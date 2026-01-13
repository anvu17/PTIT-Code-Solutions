#include<iostream>
#include<cctype>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t; cin.ignore();
    while(t--){
        int opt; cin>>opt; cin.ignore();
        string name,word,res=""; getline(cin,name);
        stringstream ss(name);
        vector<string>v;
        while(ss>>word){
            word[0]=toupper(word[0]);
            for(int i=1;i<word.size();i++) word[i]=tolower(word[i]);
            v.push_back(word);
        }
        if(opt==1){
            res=v.back();
            for(int i=0;i<v.size()-1;i++) res+=" "+v[i];
        }
        else{
            for(int i=1;i<v.size();i++) res+=v[i]+" ";
            res+=v[0];
        }
        cout<<res<<'\n';
    }
}