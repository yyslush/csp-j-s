#include<iostream>
#include<cstdio> 
using namespace std;
int main()
{
	int a,b,c,t=0;
	//freopen("test/test4.in","r",stdin);
    //freopen("test/test4.out","w",stdout);
    cin>>a>>b>>c;
    if (a>b) t=b;
    if (t>c) t=c;
    for(int i=2;i<=t-1;++i)
	   if ((a%i==b%i)&&(a%i==c%i))
		 {
		 	cout<<i;
	 		return 0;
		 }
		//cout<<a<<" "<<t<<" "<<s<<endl;
	//printf("%0.4lf",s);	
    //fclose(stdin);  
   	//fclose(stdout);
    return 0;
}
