#include<iostream>
#include<cctype>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string name,word,res=""; getline(cin,name);
    stringstream ss(name);
    vector<string>v;
    while(ss>>word){
        word[0]=toupper(word[0]);
        for(int i=1;i<word.size();i++) word[i]=tolower(word[i]);
        v.push_back(word);
    }
    for(int i=0;i<v.size()-1;i++){
        res+=v[i];
        if(i<v.size()-2) res+=" ";
    }
    string lastname=v.back();
    for(char &c:lastname) c=toupper(c);
    cout<<res<<", "<<lastname;
}