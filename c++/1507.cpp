#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
	cin>>n>>r>>c;
	int gt=r+c,dif=r-c;
    for(int j=1;j<n;j++)
		cout<<"("<<r<<","<<j<<") ";
		cout<<"("<<r<<","<<n<<")"<<endl;
    for(int i=1;i<n;i++)
		cout<<"("<<i<<","<<c<<") ";
		cout<<"("<<n<<","<<c<<")"<<endl;
    for(int i=1;;i++)
    {
        int j=i-dif;
		if (j>0) 
		{
			if(i==n||j==n)
				{
					cout<<"("<<i<<","<<j<<")"<<endl;
					break;
				}
            else cout<<"("<<i<<","<<j<<") ";
		}
    }
    for(int i=n;i>=1;i--)
    {
        int j=gt-i;
		if (j>0)
		{
		 	if(j==n)
			 {
			 	cout<<"("<<i<<","<<j<<")"<<endl;
				break;
			}
            else cout<<"("<<i<<","<<j<<") ";
		}
    }
    return 0;
}
