#include<cstdio> 
#include<string>

char *fn(int n, int to)
{
	static char buf[100] = "", BinHex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	static int i = (n >= 0) ? (buf[0] = '0',0) : (buf[0] = '-',n = -n,1);  


	if (n != 0)   
	{
		fn(n/to,to);		
		buf[i++] = BinHex[n%to];
	}
	return buf;
}

int main()
{
	char *buf = NULL;
	int n, to;
	scanf("%d%d",&n,&to); 	
	buf = fn(n,to);
	puts(buf);
	return 0;
}
