#include<iostream>
using namespace std;
long long a[1000001];
int main()
{
	int n,cont=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	int i=1,j=n;
	while(i<=j)
 	{
		if (a[i]==a[j]) {i++;j--;}
		else if (a[i]<a[j]) {a[i+1]+=a[i];i++;cont++;
		}
		else if (a[i]>a[j]){
			a[j-1]+=a[j];j--;cont++;
		}
	}
	cout<<cont;
	return 0;
}
