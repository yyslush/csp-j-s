#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<cstdio>
using namespace std;
const int n1=6,n2=8,n3=15,n4=13,n5=17;
int main()
{
	freopen("test1.in","w",stdout);
	cout<<n1<<endl;
	srand(time(0)); 
	for(int i=1;i<=n1;++i)
	{
		cout<<rand()%100<<" "<<rand()%100<<" "<<rand()%100<<endl;
	}
	fclose(stdout);
		freopen("test2.in","w",stdout);
	cout<<n2<<endl;
	srand(time(0)); 
	for(int i=1;i<=n2;++i)
	{
		cout<<rand()%100<<" "<<rand()%100<<" "<<rand()%100<<endl;
	}
	fclose(stdout);
		freopen("test3.in","w",stdout);
	cout<<n3<<endl;
	srand(time(0)); 
	for(int i=1;i<=n3;++i)
	{
		cout<<rand()%100<<" "<<rand()%100<<" "<<rand()%100<<endl;
	}
	fclose(stdout);
		freopen("test4.in","w",stdout);
	cout<<n4<<endl;
	srand(time(0)); 
	for(int i=1;i<=n4;++i)
	{
		cout<<rand()%100<<" "<<rand()%100<<" "<<rand()%100<<endl;
	}
	fclose(stdout);
		freopen("test5.in","w",stdout);
	cout<<n5<<endl;
	srand(time(0)); 
	for(int i=1;i<=n5;++i)
	{
		cout<<rand()%100<<" "<<rand()%100<<" "<<rand()%100<<endl;
	}
	fclose(stdout);
	
	return 0;
}

