#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,x; cin>>n>>x; int a[n];
		for(int &x:a) cin>>x;
		sort(a,a+n);
		int l=0,r=n-1,f=0;
		while(l<=r){
			int m=l+(r-l)/2;
			if(a[m]==x){
				f=1;
				break;
			}
			else if(a[m]<x) l=m+1;
			else r=m-1;
		}
		cout<<(f?1:-1)<<'\n';
	}
}