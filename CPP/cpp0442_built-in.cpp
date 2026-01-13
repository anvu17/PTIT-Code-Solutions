#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x; int a[n];
		for(int &x:a) cin>>x;
		sort(a,a+n);
		cout<<(binary_search(a,a+n,x)?1:-1)<<'\n';
	}
}