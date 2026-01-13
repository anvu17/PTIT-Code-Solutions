#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct stu{
    string id,name,cls,mail;
};

int main(){
    vector<stu>a; stu x;
    while(cin>>x.id){
        cin.ignore();
        getline(cin,x.name);
        cin>>x.cls>>x.mail;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),[](stu&u,stu&v){
        return u.id<v.id;
    });
    for(stu&u:a){
        cout<<u.id<<" "<<u.name<<" "<<u.cls<<" "<<u.mail<<"\n";
    }
}