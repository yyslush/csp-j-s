#include<cstdio>
#include<cstring>
using namespace std;
struct le//定义结构体可以更方便
{
	char s[22];//单词
	int len;//单词长度
	int v=0;//单词访问次数
}c[22];//单词数量不超过20个，所以c[22]即可
int n;
int maxn;
void jl(int x,int len)//两个参数分别代表待连接单词的结构体下标和长度
{
	for(int i=1;i<=n;i++)
		if(c[i].v<2)//判断访问次数
			for(int j=0;j<c[x].len;j++)//查待连接单词的每一个字母
				if(c[x].s[j]==c[i].s[0])
				{
					int k=1;//将循环变量定义在外面，方便以后相减
					int t=1;//临时变量（其实bool就行）
					for(int l=j+1;l<c[x].len&&k<c[i].len;k++,l++)//l表示待连接单词下标，k是可连接单词下标，所以在循环条件中需满足它们小于（因为不能包含，所以不能等于）单词长度
						if(c[x].s[l]!=c[i].s[k])
						{
							t=0;
							break;
						}
					if(t)
					{
						c[i].v++;
						jl(i,len+c[i].len-k);//更新长度和下标后递归
						c[i].v--;//完成后一定记得--
					}
				}
	if(len>maxn)
		maxn=len;//不解释
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",c[i].s);
		c[i].len=strlen(c[i].s);
	}
	scanf("%s",c[0].s);
	c[0].len=strlen(c[0].s);//直接将开头字母存在0号结构体
	jl(0,c[0].len);//开头字母当第一个单词处理
	printf("%d",maxn);
}
