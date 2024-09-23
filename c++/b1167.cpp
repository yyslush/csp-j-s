#include<cstring>
#include<string>
#include<iostream>
using namespace std;
char k[110],sa[1010];
int a[110],b[1010],lenk,lensa;
int main()
{
    cin>>k;
	cin>>sa;
    lenk=strlen(k);
    lensa=strlen(sa);
    for(int i=0; i<lenk; i++)
        if(k[i] >='a' && k[i]<='z') 
            a[i] = k[i] - 'a';
        else
            a[i] = k[i] - 'A';
    for(int i=0; i<lensa; i++)
        b[i]=sa[i]-a[i%lenk];
    for(int i=0; i<lensa; i++)
        if(isupper(sa[i]))
        {
            if(b[i]<'A') b[i]+=26;
            cout<<char(b[i]);
        }
        else
        {
            if(b[i]<'a')  b[i]+=26;
            cout<<char(b[i]);
        }
    return 0;
}
