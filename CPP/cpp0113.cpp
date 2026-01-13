#include <iostream>
#include <string>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string n; cin>>n;
		int l=n.length();
		if(n[l-2]=='8'&&n[l-1]=='6') cout<<1<<'\n';
		else cout<<0<<'\n';
	}
}