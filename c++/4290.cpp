#include <iostream>
#include <string>
using namespace std;

int n,ans,t;
string s;
bool init[26],wait[26];

int main(){
    cin>>n>>s;
    for(int i=0;i<s.length();++i){
        if(init[s[i]-'A']==false && wait[s[i]-'A']==false){
            if(t<n) init[s[i]-'A']=true,++t;
            else wait[s[i]-'A']=true,++t;
        }
        else {
            if(init[s[i]-'A']) --t,init[s[i]-'A']=false;
            if(wait[s[i]-'A']) --t,++ans,wait[s[i]-'A']=false;
        }
        // cout<<s[i]<<" "<<ans<<" "<<t<<" ";
        // for(int j=0;j<26;++j) cout<<init[j]<<" ";
        // cout<<endl;
    }
    cout<<ans;
    return 0;
}
