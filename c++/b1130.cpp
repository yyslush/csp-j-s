#include<iostream>
#include<cstring>
using namespace std;
char s[100005];
int main ()
{
	//freopen("test/test4.in","r",stdin);
    //freopen("test/test4.out","w",stdout);
    int l,a[25],b[25],x,t=100001;
    gets(s);
    memset(b,0,sizeof(b));
    memset(a,0,sizeof(a));
    for(int i=0;i<strlen(s);++i)
    {
    	++a[int(s[i])-97];
    	if(b[int(s[i])-97]==0) b[int(s[i])-97]=i;
	}
	//for(int i=0;i<=25;++i) cout<<char(i+97)<<" ";cout<<endl;
	//for(int i=0;i<=25;++i) cout<<a[i]<<" ";cout<<endl;
	//for(int i=0;i<=25;++i) cout<<b[i]<<" ";cout<<endl;
	for (int i=0;i<=25;++i)
		if (a[i]==1&&(b[i]<t&&b[i]!=0)) 
		{
			t=b[i];
			x=i;
		}
   	if (t<100001)cout<<char(x+97);else cout<<"no";	
	//fclose(stdin);   
   	//fclose(stdout);	
	return 0;
}

