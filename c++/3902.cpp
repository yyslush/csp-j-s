#include<iostream>
#include<string>
using namespace std;
 
int n,l,a[3];
string s;
 
int main()
{
    //freopen("test/number10.in","r",stdin);
    //freopen("test/nu.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;++i)
    {
        a[0]=0,a[1]=0,a[2]=0;
        cin>>s;
        l=s.length();
        int modn=0,p=0,maxl=0;
        for (int j=l-1;j>=0;--j)
        {
            a[(s[j]-48)%3]++;
            if ((s[j]-48+modn)%3==0) p=j;
            modn=(s[j]-48+modn)%3;
            //cout<<modn;          
        }
        //cout<<endl<<modn<<endl;
        if (modn==0) maxl=l;
        if (modn==1)
        {
            //cout<<11<<" "<<p<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            if ((p>=2)||(p==0))
            {
                if (a[1]>=1)
                {
                    a[1]--;maxl=a[0]+a[1]+a[2];
                } 
                else
                {
                    int i=1;
                    while ((a[2]==2)&&(s[i]-48==0)) ++i;
                    maxl=l-i-1;
                } 
                 
            }
            //cout<<12<<" "<<p<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            if (p==1)
            {
                while (s[p]-48==0) ++p;
                maxl=l-p;
            }
            //cout<<1<<" "<<p<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
        }
        else if (modn==2)
        {
            //cout<<21<<" "<<p<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;  
            if ((p>=3)||(p==0))
            {
                if (a[2]>=1) 
                {
                    a[2]--;
                    maxl=a[0]+a[1]+a[2];
                }
                else
                {
                    int i=1;
                    if (a[1]>=5) a[1]-=2;
                    else while(((s[0]-48)%3==1)&&(s[i]-48==0))  ++i;
                    if (s[i]-48==1)
                    {
                        while(s[i+1]-48==0) ++i;
                        maxl=l-i;
                    } 
                    else maxl=l-i-1;
                } 
                 
            }
            else
            //cout<<22<<" "<<p<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            if ((p==2)||(p==1))
            {
                while (s[p]-48==0) ++p;
                if (p!=l)maxl=l-p; else maxl=1;
            }
            //cout<<2<<" "<<p<<" "<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;   
        }   
                     
        if (maxl==0) cout<<"ERR"<<endl; else  cout<<l-maxl<<endl;       
    }
    //fclose(stdout);
    return 0;
}
 

