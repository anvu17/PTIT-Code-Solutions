#include<iostream>
using namespace std;

int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		int k; cin>>k; cin.ignore();
		bool f[26]={};
		for(char c:s) f[tolower(c)-'a']=1;
		int cnt=0;
		for(bool x:f) cnt+=x;
		cout<<(26-cnt<=k)<<'\n';
	}
}