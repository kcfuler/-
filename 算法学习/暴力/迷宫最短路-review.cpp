#include <iostream>
#include <queue>
using namespace std;
typedef pair<int,int> P;

const int INF=100000,maxn=101;
int d[maxn][maxn],n,m,sx,sy,gx,gy,ans;
char maze[maxn][maxn];
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};

void bfs()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			d[i][j]=INF;
		}
	}
	queue<P>que;
	que.push(P(sx,sy));
	d[sx][sy]=0;
	while(que.size())
	{
		P p=que.front();
		que.pop();
		if(p.first==gx&&p.second==gy) return ;
		for(int i=0;i<4;i++)
		{
			int xn=p.first+dx[i];
			int yn=p.second+dy[i];
			if(xn>0 && yn>0 && xn<m && yn<n && d[xn][yn]==INF && maze[xn][yn]!='#' )
			{
				que.push(P(xn,yn));
				d[xn][yn]=d[p.first][p.second]+1;
			}
		}
	}
}

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>maze[i][j];
		}
	}
	bfs();
	if(d[gx][gy]==INF) cout<<"Can't reach"<<endl;
	else cout<<d[gx][gy]<<endl;
	return 0;
}
