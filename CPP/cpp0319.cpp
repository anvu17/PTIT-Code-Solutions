#include<iostream>
using namespace std;

int main(){
    int m,s; cin>>m>>s;

    // ----- Không có đáp án -----
    if((s==0&&m>1)||s>9*m){
        cout<<"-1 -1";
        return 0;
    }

    // ----- Trường hợp đặc biệt: hai số 1 chữ số, tổng bằng 0 => hai số đó là 0, 0 -----
    if(s==0&&m==1){
        cout<<"0 0";
        return 0;
    }

    // ------ Tìm số lớn nhất ------
    string biggest;
    for(int i=0;i<m;i++){
        int d=min(9,s);
        biggest+=char('0'+d);
        s-=d;
    }

    // ------ Tìm số nhỏ nhất ------
    string smallest(m,'0');
    s=0;
    for(char c:biggest) s+=c-'0';

    smallest[0]='1'; s--;
    for(int i=m-1;i>=0;i--){
        int d=min(9-(smallest[i]-'0'),s);
        smallest[i]+=d;
        s-=d;
    }
    
    cout<<smallest<<' '<<biggest;
}