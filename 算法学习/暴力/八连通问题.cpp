//八连通问题，同样是深度搜索，其实之前已经做过几次了
//就是将走过的部分直接清除，计算dfs的次数就ok 

#include <iostream>
using namespace std;

const int maxn=105;
int n,a[maxn][maxn],m;
int dx[8]={0,1-1,0,1,1,-1,-1};
int dy[8]={1,0,0,-1,1,-1,1,-1};

void dfs(int x,int y)
{
	//if(a[x][y]==0) return ; //打上边界
	a[x][y]==0;//将到达的地方都消除，表示来过了 
	for(int i=0;i<7;i++)
	{
		int xn=x+dx[i];
		int yn=y+dy[i];
		if( a[xn][yn]==1 && xn>=0 && xn<n && yn>=0 && yn<m )
		{
			dfs(xn,yn);
		}
	} 
	return ;
}

int main ()
{
	int sum=0;
	char t;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		    cin>>t;
			if(t=='W') a[i][j]=1;
			else a[i][j]=0;	
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1)
			{
				dfs(i,j);
				sum++;
			}
		//cout<<a[i][j];
		}
		//cout<<endl;
	}
	
	cout<<sum<<endl;
	
	return 0;
}
