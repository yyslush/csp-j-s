#include <iostream>
using namespace std;

int n,h,m,s;
string ch;

int main(){
    cin>>n;
    if(n==12) cin>>ch;
    cin>>h>>m>>s;
    if(n==12){
        if(ch[0]=='P') h+=12;
    }
    else{
        if(h<=12) cout<<"AM ";else h-=12,cout<<"PM ";
    }
    cout<<h<<":"<<m<<":"<<s;
    return 0;
}
