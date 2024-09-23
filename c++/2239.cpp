#include<iostream>
using namespace std;
int a[100][100];
int main()
{    		
	for(int i=1;i<=10;i++)
	   for(int j=1;j<=10;j++) cin>>a[i][j];
    for(int i=1;i<=10;i++)
	{
		int j=1;
		while(a[i][j]!=1&&j<=10)
		{
			a[i][j]=2;
			j++;
        }
		j=10; 
		while(a[i][j]!=1&&j>=1)
		{
			a[i][j]=2;
			j--; 
		}
	}
	for(int i=1;i<=10;i++)
	    for(int j=1;j<=10;j++)
			if(a[i][j]==1&&(a[i][j+1]==2||a[i][j-1]==2||a[i+1][j]==2||a[i-1][j]==2))  a[i][j]=2;
	int k=0;
    for(int i=1;i<=10;i++)
		for(int j=1;j<=10;j++)
			if(a[i][j]==0) k++;
    cout<<k;
	return 0; 
}
