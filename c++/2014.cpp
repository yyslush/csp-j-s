#include<iostream>
using namespace std;
int main()
{
    unsigned long long m,m12,m16,n;
    int s=0,r=0,l=0;
    cin>>n;
    m=m12=m16=n;   
    while (m>0) 
    {
        s+=m%10;
        m/=10;
        l+=m12%12;
        m12/=12;
        r+=m16%16;
        m16/=16;
        //cout<<m<<" "<<m12<<" "<<m16<<endl;
		//cout<<s<<" "<<l<<" "<<r<<endl;
    }   
    cout<<r<<endl;
    if ((s==r)&&(s==l))
      cout<<"Right"<<endl;
    else
        cout<<"Wrong"<<endl;
    return 0;
} 
