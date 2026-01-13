#include<iostream>
#include<fstream>
#include<climits>
using namespace std;

int main(){
    ifstream in("DATA.in");
    string str; long long s=0;
    while(in>>str){
        try{
            long long x=stoll(str);
            if(x>=INT_MIN&&x<=INT_MAX) s+=x;
        }catch(...){}
    }
    cout<<s;
}