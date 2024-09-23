#include <cstdio>   
#include <cstring>   
#include <algorithm>
#include<iostream>   
    
using namespace std;   
    
int kcase=1,n,m,dp[105][3005],p[105][3005],te,max=0;   
const int need[]={6,2,5,5,4,5,6,3,7,6};   
    
int main(){   
    freopen("test/test1.out","w",stdout);
    scanf("%d%d",&n,&m);   
        //printf("%d: ",kcase++);   
        for(int i=0;i<=n;++i)   
        for(int j=0;j<m;++j){   
            dp[i][j]=p[i][j]=-1;   
            if(!j)  dp[i][j]=0;   
            for(int d=9;d>=0;--d){   
                if(i>=need[d]){   
                    te=dp[i-need[d]][(j*10+d)%m];   
                    if(te>=0&&te+1>dp[i][j])   
                        dp[i][j]=te+1,p[i][j]=d; 
                    //cout<<te<<endl;
					for (int c=0;c<=n;++c)
					  {
					  		cout<<c<<endl;
							  for (int d=0;d<=m;++d) cout<<dp[c][d]<<" ";
					  		cout<<endl;
					  } 
					 
					for (int c=0;c<=n;++c)
					  {
					  		
							cout<<c<<endl;
							for (int d=0;d<=m;++d) cout<<p[c][d]<<" ";
					  		cout<<endl;
					  }   	  
                }   
            }          
    
        if(p[n][0]<0)   
            printf("-1\n");   
        else{   
            int i=n,j=0;   
            while(dp[i][j]!=0)   
                printf("%d",p[te=i][j]),i-=need[p[i][j]],j=(j*10+p[te][j])%m;  printf("\n");   
        }   
    } 
    //cout<<max;
	fclose(stdout);  
    return 0;   
}   

