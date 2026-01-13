#include <bits/stdc++.h>
using namespace std;

int main(){
    char a1[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    char a2[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    int t; cin>>t;
    while(t--){
        int code,correct=0; cin>>code;
        char a;
        for(int i = 0; i < 15; i++){
            cin>>a;
            if((code==101&&a==a1[i]) || (code==102&&a==a2[i])) correct++;
        }
        cout<<fixed<<setprecision(2)<<correct*10.0/15<<'\n';
    }
}