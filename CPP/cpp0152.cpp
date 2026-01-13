#include<iostream>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int a,m,r=-1; cin>>a>>m;
		// Brute force:
		for(int x=0;x<m;x++){
			if((a*x)%m==1){
				r=x;
				break;
			}
		}
		cout<<r<<'\n';
	}
}