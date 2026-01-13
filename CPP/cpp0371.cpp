#include<iostream>
#include<cctype>
using namespace std;

int main(){
    string s; cin>>s;
    for(char c:s){
        char ch=tolower(c);
        if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='y')
            cout<<'.'<<ch;
    }
}