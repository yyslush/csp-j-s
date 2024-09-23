#include<iostream>
//#include<cstdio> 
using namespace std;
int main()
{
	int n,t,f;
	long long s=0;
	//freopen("test/test4.in","r",stdin);
    //freopen("test/test4.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;++i)
    {
    	t=i; f=0;
    	if(t%7!=0) f=1;
    	while(t>0&&t%10!=7) t/=10;
    	if (t==0&&f==1)
		{
			t=i*i;
			s+=t;
			//cout<<i<<" "<<t<<" "<<s<<endl;
		 } 
		
	}
	cout<<s;
	//fclose(stdin);  
   	//fclose(stdout);
   	return 0;
}
