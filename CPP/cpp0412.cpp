#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n; int a[n];
		for(int &x:a) cin>>x;
		// Counting sort:
		int c0=count(a,a+n,0);
		int c1=count(a,a+n,1);
		int c2=n-c0-c1;
		for(int i=0;i<c0;i++) cout<<0<<' ';
		for(int i=0;i<c1;i++) cout<<1<<' ';
		for(int i=0;i<c2;i++) cout<<2<<' ';
		cout<<'\n';
	}
}