#include<iostream> 
#include <cstdio>
using namespace std;
int t=0;
int main()
{
    for (int i=1;i<=5;i++)
    {
        int x;
		cin>>x;        
        t+=x;         
    }
    printf("%0.1lf",t*1.0/5);
    return 0;   
}
