#include<iostream>
#include<cmath>
using namespace std;
int N,a[18]={0,1};;
bool isp[33],visit[18]={0,0};

void solve(int n)
{
    if(n==N+1)
    {
        if(isp[a[n-1]+a[1]])
        {
            printf("1");
            for(int i=2;i<=N;i++)
                printf(" %d",a[i]);
            cout<<endl;
        }
    }
    else 
    {
        for(int i=2;i<=N;i++)
            if(!visit[i]&&isp[a[n-1]+i])
            {
                a[n]=i;
                visit[i]=1;
                solve(n+1);
                visit[i]=0;
            }
    }
}
void isprime()
{
	for(int i=1;i<=32;++i) isp[i]=true;
	isp[1]=false;
    for(int i=2;i<sqrt(33);i++)
    	for(int j=2;j<=33/i;++j)
        	if(isp[i]) isp[i*j]=false; 
}

int main()
{ 
	//freopen("primeling6.in","r",stdin);
	//freopen("primeling6.out","w",stdout);	
	isprime();   
    scanf("%d",&N);
    solve(2);
    //fclose(stdout);
    //fclose(stdin);
    return 0;
}
