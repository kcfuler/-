//����ͨ���⣬ͬ���������������ʵ֮ǰ�Ѿ�����������
//���ǽ��߹��Ĳ���ֱ�����������dfs�Ĵ�����ok 

#include <iostream>
using namespace std;

const int maxn=105;
int n,a[maxn][maxn],m;
int dx[8]={0,1-1,0,1,1,-1,-1};
int dy[8]={1,0,0,-1,1,-1,1,-1};

void dfs(int x,int y)
{
	//if(a[x][y]==0) return ; //���ϱ߽�
	a[x][y]==0;//������ĵط�����������ʾ������ 
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
