#include <iostream>
using namespace std;

int n,score;

int main(){
    cin>>n;getchar();
    for(int i=1;i<=5*n;++i){
        char ch;
        ch=getchar();
        if(i%5==0) score+=(ch-'0')*2;
        else score+=ch-'0';
    }
    cout<<score;
    return 0;
}
