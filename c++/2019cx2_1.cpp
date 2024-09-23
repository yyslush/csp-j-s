#include <iostream>
#include <string>
using namespace std;

int t;
string s1,s2;

int main(){
    cin>>t;
    for(int i=1;i<=t;++i){
        getchar();
        getline(cin,s1);
        getline(cin,s2);
        s1.erase(0,1);
        int k=0;
        for(int j=0;j<s1.size();++j) if(s1[j]=='1') ++k;
        if(k%2==0) k=0;else k=1;
        //cout<<s1<<endl;
        int j=s1.size()-1;
        while(k==1&&j>=0){
            if(s1[j]-'0'+k==2) k=1,s1[j]='0';
            else s1[j]='1',k=0;
            --j;
        }
        if(k==1) s1='1'+s1;
        cout<<s1<<endl;
        cout<<s2<<endl;
        if(s1==s2) cout<<"YES"<<endl;else cout<<"NO"<<endl;
    }
    return 0;
}
