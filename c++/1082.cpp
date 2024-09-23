#include<iostream>
using namespace std;
int a[5];
int main() 
{
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
            if(a[j]>a[j+1])
            {
                a[5]=a[j];
                a[j]=a[j+1];
                a[j+1]=a[5];
            }       
    }
    if(a[1]-a[0]==2&&a[2]-a[1]==2&&a[3]-a[2]==2&&a[0]%2==1)
    {
        for(int i=0;i<=2;i++) cout<<a[i]<<"+"<<2<<"="<<a[i+1]<<endl;
    }
    else cout<<a[3]<<" "<<a[2]<<" "<<a[1]<<" "<<a[0]<<endl;
    return 0;
}
