#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int lens=s.length();
    for(int i=0;i<lens;i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            int n=s[i]-'A';
            if(n==0)cout<<"Z";
            else if(n<=13) cout<<char('Z'-n);
            else cout<<char('A'+26-n-1);
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            int n=s[i]-'a';
            if(n==0)cout<<"z";
            else if(n<=13) cout<<char('z'-n);
            else cout<<char('a'+26-n-1);
        }
        else cout<<s[i];
    }
    cout<<endl;
    return 0;
}
