#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
	//freopen("test/test5.in","r",stdin);
    //freopen("test/test5.out","w",stdout);
    string s;
    int l;  
    cin>>s; 
	if (s.rfind("ing")==s.length()-3) s.erase(s.length()-3,3);
	    else if (s.rfind("er")==s.length()-2) s.erase(s.length()-2,2); 
    		else if (s.rfind("ly")==s.length()-2)  s.erase(s.length()-2,2);
    cout<<s;
	//fclose(stdin);   
   	//fclose(stdout);	 
	return 0;
}

