#include<iostream>

using namespace std;
int main()
{
    int s=92;
	for (int i=1;i<=1991;i++)
	   s=(s*92) %100;
	cout<<s%100<<endl;
	return 0;
}
