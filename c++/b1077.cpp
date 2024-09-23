#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,p,q,t;
	double s=0.0;	
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    cin>>n;
    p=1;q=2;
	for(int i=1;i<=n;++i)
	{
	 	s=s+q*1.0/p*1.0;
	 	t=p;
	 	p=q;
	 	q=t+q;
		//cout<<p<<" "<<q<<" "<<s<<endl;
	}
    printf("%0.4lf",s);	
    //fclose(stdin);  
    //fclose(stdout);
    return 0;
}
