#include <iostream>
#include <cmath>
using namespace std;

bool check(int n){
	int cnt1=0,cnt2=0;
	while(n){
		if(n%10%2==0) cnt1++;
		else cnt2++;
		n/=10;
	}
	return cnt1==cnt2;
}

int main(){
	int t; cin>>t;
	int cnt=0,s=pow(10,t-1),e=pow(10,t);
	for(int i = s; i < e; i++){
		if(check(i)){
			if(cnt%10==0) cout<<'\n';
			cout<<i<<' ';
			cnt++;
		}
	}
}