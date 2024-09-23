#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main ()
{
	 int n;
	char s1[100],s2[100];
	freopen("test/test1.in","r",stdin);
    freopen("test/test1.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;++i)
	{
		scanf("%s%s",s1,s2);
		//cout<<n<<" "<<i<<" "<<s1<<" "<<s2<<endl;
		if (s1[0]==s2[0]) cout<<"Tie"<<endl;
		else 
		{
			if (s1[0]=='R'&&s2[0]!='P') cout<<"Player1"<<endl;
			else if (s1[0]=='S'&&s2[0]!='R') cout<<"Player1"<<endl;
			else if (s1[0]=='P'&&s2[0]!='S') cout<<"Player1"<<endl;else cout<<"Player2"<<endl;
		}
	}    
	fclose(stdin);   
   	fclose(stdout);	
	return 0;
}

