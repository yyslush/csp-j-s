#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int MAX_NUM = 70;
int stickNum;
int stickLen[MAX_NUM];
int sumLen;
bool used[MAX_NUM];
bool cmp(int x,int y)
{
	return x>y;
}
bool FindStick( int curId, int curLen, int curNum, int targetLen )
{
	if( curNum == sumLen / targetLen )
	{
		return true;
	}
	if( curLen == targetLen )
	{
		return  FindStick( 0, 0, curNum+1, targetLen );
	}
	else
	{
        int i;
    	int pre = 0;
    	for( i=curId; i<stickNum; i++ )
    	{
    		if( pre != stickLen[i] && ( curLen + stickLen[i] <= targetLen ) && !used[i] )
    		{
    			pre = stickLen[i];
                used[i] = true;
                //下面这一句很抽象
                //当FindStick == true时， stickLen[i]和后续的木棒都可以拼接成功                 
    			if( FindStick( i+1, curLen + stickLen[i], curNum, targetLen ) )
    			{
                    break;
                }
                
                used[i] = false;
                //这句也不好理解
                //为什么不是 i == 0 
                if( curId == 0 )
                {
                    return false;
                }            
    		}
    	}
    	if( i >= stickNum )				
    	    return false;    
        else
            return true; 
    }	
}
int main()
{
	while( cin >> stickNum, stickNum )	
	{	
        sumLen = 0;
        memset( used, false, sizeof(used) );        
		for( int i=0; i<stickNum; i++ )
		{
			cin >> stickLen[i];             			
			sumLen += stickLen[i];
		}
		sort( stickLen, stickLen + stickNum, cmp );		
        int x;
        for( x=stickLen[0]; x<sumLen; x++ )
    	{
    		if( sumLen % x == 0 )
    		{    			
    			if( FindStick( 0, 0, 0, x ) )
    			{
    			    break;
    			}
    		}
    	}
		cout << x << endl;		
	}	 
	return 0;
}
