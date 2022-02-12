//自己写的八连通改了一下就G了,试一下书上的写法
//tnnd ,找不到自己写的bug在哪 
#include <iostream>
using namespace std;

const int maxn=100;
int n,m;
char map[maxn][maxn];

void dfs(int x,int y)
{
	map[x][y]='.';
	// 遍历所有的方向 
	for(int i=-1;i<=1;i++)
	{
		for(int j=-1;j<=1;j++)
		{
			int xn=x+i;
			int yn=y+j;
			if(map[xn][yn]=='W' && xn>=0 && xn<n && yn>=0 && yn<m )
			{
				dfs(xn,yn);
			}
		}
	}
}

int main ()
{
	int sum=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>map[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
        {
        	if(map[i][j]=='W')
        	{
        		dfs(i,j);
        		sum++;
        	}
        }		
	}
	
	cout<<sum<<endl;
	
	return 0;
} 
