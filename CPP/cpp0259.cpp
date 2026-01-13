#include<iostream>
using namespace std;

int main(){
	int n,m,p; cin>>n>>m>>p;
	int a[n][m],b[m][p],c[n][p]={};
	for(auto &r:a) for(auto &x:r) cin>>x;
	for(auto &r:b) for(auto &x:r) cin>>x;
	for(int i=0;i<n;i++)
		for(int j=0;j<p;j++)
			for(int k=0;k<m;k++)
				c[i][j]+=a[i][k]*b[k][j];
	for(auto &r:c){
		for(auto &x:r){
			cout<<x<<' ';
		}
		cout<<'\n';
	}
}