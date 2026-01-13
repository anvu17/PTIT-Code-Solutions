#include<iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        /*
        Một số chia hết cho 11 khi
        (tổng chữ số ở vị trí lẻ) - (tổng chữ số ở vị trí chẵn)
        chia hết cho 11.
        */
        string n; cin>>n;
        int s=0;
        for(int i=0;i<n.size();i++){
            int d=n[i]-'0';
            if(i%2==0) s+=d;
            else s-=d;
        }
        cout<<(s%11==0)<<'\n';
    }
}