//挑战程序设计竞赛 bfs求迷宫
//bfs 的思想主要是逐层向下一个状态搜索，每一步都是向相邻的状态搜索，所以可以用来求最短路径问题和最少答案问题
//实现的过程（利用队列（原则为先进先出）） ：将初始状态加入队列，然后从初始状态中将下一步的状态加入队列，然后将初始状态从队列中取出，对初始状态进行操作
//然后再从队列中取出下一个状态，重复这个过程，直到找到答案或者队列为空

//这道题目用d[x][y]来对 maze[x][y] 进行标记，防止重复访问，使得路径不是最小 

#include <iostream>
#include <queue>
using namespace std;
typedef pair<int,int> P;//这里是利用键值对来表示状态（坐标） 
const int INF=1000000,maxn=101;// 用INF代表无法直接转移或者已经访问过 

int d[maxn][maxn],m,n,sx,sy,gx,gy;  //分别代表题目中的走到哪一个状态的最小值，题目中的迷宫的大小，起点和终点 
char maze[maxn][maxn];//用来存储迷宫 
int dx[4]={0,1,-1,0};//用来模拟四个方向 
int dy[4]={-1,0,0,1};

int bfs()
{
     queue<P> que;
	 for(int i=0;i<n;i++)//初始化，代表没有访问过 
	 {
	 	for(int j=0;j<m;j++)
	 	{
	 		d[i][j]=INF;
	 	}
	 }
	 que.push(P(sx,sy));//将起点加入队列 
	 d[sx][sy]=0;//初始化起点 
	 while (que.size())//当搜索结束（队列为空）就 退出循环 
	 {
	 	P p=que.front(); //获得队列的起始元素 ，搜索开始 
	 	que.pop();//将搜索过的元素弹出，使得队列的顶部始终都是将要访问的状态进入下一步循环， 
	 	if(p.first=gx && p.second=gy) break;//如果已经得到结果就直接退出 
	 	for(int i=0;i<4;i++)//对四个方向进行遍历，也就是确定下一步能到达的状态 
	 	{
	 	    int xn=p.first+dx[i];//形式变量 
	 	    int yn=p.second+dy[i];
	 	    if( xn>0 && yn>0 && maze[xn][yn]!='#' && xn<n&& yn<m && d[xn][yn]!=INF )//确定边界，不要超出迷宫，已经访问过的状态不再访问 
	 	    {
	 	    	que.push(P(xn,yn));//将可以转移的状态加入队列，等待搜索 
	 	    	d[xn][yn]=d[p.first][p.second]+1;//现在能到达的状态的最短距离为上一步的距离加上一 
	 	    }
	 	}
	 }
	 return d[gx][gy];//返回终点，如果到达不了就是INF 
}

int main ()
{
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>maze[i][j];
		}
	}
	cin>>sx>>sy>>gx>>gy;
	int ans=bfs();
	if(d[gx][gy]==INF) cout<<"Can't reach"<<endl;
	else cout<<d[gx][gy]<<endl;
	return 0;
}
