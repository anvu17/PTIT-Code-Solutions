#include<iostream>
using namespace std;

struct pt{
    int x,y,z;
};

int main(){
    int t; cin>>t;
    while(t--){
        pt a[4];
        for(int i=0;i<4;i++) cin>>a[i].x>>a[i].y>>a[i].z;
        int a1=a[1].x-a[0].x,
            b1=a[1].y-a[0].y,
            c1=a[1].z-a[0].z,
            a2=a[2].x-a[0].x,
            b2=a[2].y-a[0].y,
            c2=a[2].z-a[0].z,
            a3=a[3].x-a[0].x,
            b3=a[3].y-a[0].y,
            c3=a[3].z-a[0].z;
        int det=a1*(b2*c3-b3*c2)
                -b1*(a2*c3-a3*c2)
                +c1*(a2*b3-a3*b2);
        cout<<(!det?"YES":"NO")<<'\n';
    }
}