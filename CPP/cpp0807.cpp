#include<iostream>
using namespace std;

class IntSet{
    public:
        int a[1001];
        IntSet(){
            for(int i=0;i<=1000;i++)a[i]=0;
        }
        void input(int n){
            int x;
            while(n--){
                cin>>x;
                a[x]=1;
            }
        }
        void inter(IntSet&b){
            for(int i=1;i<=1000;i++){
                if(a[i]&&b.a[i])cout<<i<<' ';
            }
        }
};

int main(){
    freopen("DATA.in","r",stdin);
    int n,m; cin>>n>>m;
    IntSet a,b;
    a.input(n); b.input(m);
    a.inter(b);
}