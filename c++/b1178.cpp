#include<cstdio>
#include<cstring>
long b2ten(char *x,int b)
{
	int ret=0;
	int len=strlen(x);
	for (int i=0;i<len;++i)
	{
		if (x[i]-'0'>=b) return -1;
		ret*=b;
		ret+=x[i]-'0';
	}
	return (long)ret;
}
int main()
{
	char p[8],q[8],r[8];
	bool f=false;
	int pa,qa,ra,i;
	//freopen("test/test3.in","r",stdin);
	//freopen("test/test3.out","w",stdout);
	scanf("%s%s%s",p,q,r);
	for (i=2;i<=16;++i)
	{
		pa=b2ten(p,i);
		qa=b2ten(q,i);
		ra=b2ten(r,i);
		if(pa==-1||qa==-1||ra==-1) continue;
		if(pa*qa==ra)
		{
			
			f=true;
			break;	
		}
	}
	if (f) printf("%d",i);else printf("0");
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
