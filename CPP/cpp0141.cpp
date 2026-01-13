#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long long f[93];
	f[1]=f[2]=1;
	for(int i=2;i<93;i++) f[i]=f[i-1]+f[i-2];
	
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		cout<<(binary_search(f,f+93,n)?"YES":"NO")<<'\n';
	}
}