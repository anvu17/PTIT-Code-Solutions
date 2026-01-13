#include<iostream>
#include<set>
using namespace std;

int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		int k; cin>>k; cin.ignore();
		set<char> st;
		for(char c:s) st.insert(c);
		cout<<(26-st.size()<=k)<<'\n';
	}
}