#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        double x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<fixed<<setprecision(4)<<hypot(x2-x1,y2-y1)<<'\n';
    }
}