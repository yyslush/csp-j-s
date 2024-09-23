#include<iostream>
using namespace std;
 
int main()
{
    int i,a,k,x=0,y=0;
    for(i=1;i<=12;i++)
    {
        cin>>a;
        x+=300;
        if(x<a){cout<<"-"<<i<<endl;return 0;}
        x-=a;
		k=x%100;
		y+=x-k;
		x=k;
    }
    cout<<x+y*120/100;
    return 0;
}
