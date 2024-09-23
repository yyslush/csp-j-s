#include<iostream>
#include<cstring>
using namespace std;
char st[20];
int l,s,r,n;

int main()
{
	freopen("1346/police2.in","r",stdin);
	freopen("1346/pol.out","w",stdout);
	cin>>l>>s>>r>>n;
	getchar();
	int t=l+s+r;
	for(int i=1;i<=n;++i)
	{
		gets(st);		
		int time=((st[0]-48)*10+(st[1]-48))*3600+((st[2]-48)*10+(st[3]-48))*60+(st[4]-48)*10+(st[5]-48);
		time%=t;	
		if((time>l&&st[6]=='L')||(time<=l&&time>l+s&&st[6]=='S')&&(time<=s+l&&st[6]=='R'))
		{
			for(int j=7;j<strlen(st);++j)
				cout<<st[j];
			cout<<endl;		
		}					
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
