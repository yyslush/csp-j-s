#include<iostream>
#include<string.h>
using namespace std;
char str[1030];

void dna(int s,int e)
{
    int i;
    for(i=s+1;i<e;i++)
        if(str[i]!=str[i-1])
        {
            cout<<"C";
            dna(s,(s+e)/2);
            dna((s+e)/2,e);
            return;
        }
    if(str[s]=='0')
        cout<<"A";
    else
        cout<<"B";
}

int main()
{
    int n;
    cin>>str;
    n=strlen(str);
    dna(0,n);
    cout<<endl;
    return 0;
}
