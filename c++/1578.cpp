#include <iostream>
using namespace std;
int main()
{
    char a[27]="";
    int s,t,w,z,j=0;
    cin>>s>>t>>w;
    cin>>a+1;    
    do{
    	a[z=w]++;
    	while(a[z]>t+96-w+z) a[--z]++;
    	for(z++;z<=w;z++)  a[z]=a[z-1]+1;
    	cout<<a+1<<endl;
    }
    while(++j<5&&a[1]<t+96-w+1);
	return 0;
}
