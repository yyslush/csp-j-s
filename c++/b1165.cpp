#include<iostream>
#include<string>
#include<cctype>
#include<cstdio>
using namespace std;
 
inline string change(string s){
    for (int i=0;i<s.length();++i) 
		if(s[i]>=65&&s[i]<=90) s[i]=tolower(s[i])else s[i]=toupper(s[i]);
	
    return s;
}
 
int main()
{
    string s;
    getline(cin,s);
    s=change(s);
    int i;
    for (i=0;i<s.length();++i){
        if (s[i]==' '){
            words=s.substr(pos,i-pos);
            if (point==words){
                if (anspos==-1) anspos=pos;
                ans++;
            }
            pos=i+1;
        }
    }
    if (anspos==-1) cout<<anspos<<endl;
    else cout<<ans<<' '<<anspos<<endl;
    return 0;
}
