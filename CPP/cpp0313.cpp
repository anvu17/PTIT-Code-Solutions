#include<iostream>
using namespace std;

int main(){
    string s,d;
    getline(cin,s); cin>>d;
    int x;
    while((x=s.find(d)) != -1) s.erase(x,d.length());
    cout<<s;
}