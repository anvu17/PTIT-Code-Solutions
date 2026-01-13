#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("DATA.in");
    int freq[1001]={},x;
    while(in>>x) freq[x]++;
    for(int i=0;i<=1000;i++){
        if(freq[i]) cout<<i<<' '<<freq[i]<<'\n';
    }
}