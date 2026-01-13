#include<iostream>
#include<cctype>
#include<sstream>
#include<vector>
using namespace std;

int main(){
    string name,word; getline(cin,name);
    stringstream ss(name);
    vector<string>v;
    while(ss>>word) v.push_back(word);

    string username;
    for(char c:v.back()) username+=tolower(c);
    for(int i=0;i+1<v.size();i++) username+=tolower(v[i][0]);

    cout<<username<<"@ptit.edu.vn";
}