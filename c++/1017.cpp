#include<iostream>
using namespace std;
int main()
{
    char s;
    cin>>s;
    int dz=0,xz=0,nu=0,i=1;
	while (s!='#')
	{
		if ((s>='A') && (s<='Z')) dz++;
		if ((s>='a') && (s<='z')) xz++;
		if ((s>='0') && (s<='9')) nu++;
		i++;
		cin>>s;
	}
	cout<<dz<<' '<<xz<<' '<<nu<<endl;
	return 0;
}
