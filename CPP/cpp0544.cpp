#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define PI 3.141592653589793238

struct pt{
    double x,y;
};

double dist(pt a,pt b){
    return hypot(a.x-b.x,a.y-b.y);
}

bool isTri(double a,double b,double c){
    return a+b>c && a+c>b && b+c>a;
}

int main(){
    int t; cin>>t;
    while(t--){
        pt a,b,c; cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
        double ab=dist(a,b),bc=dist(b,c),ca=dist(c,a);
        if(!isTri(ab,bc,ca)){
            cout<<"INVALID\n";
            continue;
        }
        double s=(ab+bc+ca)/2; // semiperimeter
        double ar=sqrt(s*(s-ab)*(s-bc)*(s-ca)); // area
        double R=ab*bc*ca/(4*ar); // circumradius 
        cout<<fixed<<setprecision(3)<<PI*R*R<<'\n';
    }
}