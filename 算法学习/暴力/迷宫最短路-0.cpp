#include <iostream>
#include <queue>
using namespace std;
const int MAX_N = 100;
const int MAX_M = 100;
const int INF = 0x3f3f3f3f;
typedef pair<int, int> P;
char maze[MAX_N][MAX_M + 1];
int N, M;
int sx, sy; //����λ��
int gx, gy; //�յ��λ��
 
int d[MAX_N][MAX_M];//������㵽ĳһ��ľ���
int dx[4] = { 1,0,-1,0 }, dy[4] = { 0,1,0,-1 }; //����ÿ��x��y�����λ��
 
void bfs()
{
	queue<P> que;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			d[i][j] = INF;	//��ʼ�����е�ľ���ΪINF
	que.push(P(sx, sy));
	d[sx][sy] = 0;	//����������������Ϊ0������������׶�
 
	while (que.size()) //��Ŀ��֤��·���յ㣬���Բ��õ�����ѭ��
	{
		P p = que.front(); que.pop();//��������Ԫ��
		int i;
		for (i = 0; i < 4; i++)
		{
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];//�ƶ��������
			//�жϿ��ƶ���û����
			if (0 <= nx&&nx < N
				&& 0 <= ny&&ny < M
				&&maze[nx][ny] != '#'
				&&d[nx][ny] == INF)//֮ǰ�����Ļ����ÿ��ǣ���Ϊ�����ڶ����е������϶������ø��õĽ�
			{
				que.push(P(nx, ny));	//�����ƶ����趨����Ϊ֮ǰ��һ���������
				d[nx][ny] = d[p.first][p.second] + 1;
				if(nx==gx && ny==gy) break;
 
                        }
		}
		if(i!=4) break;
	}
 
}
 
int main()
{
	cin>>N>>M;
	for (int i = 0; i < N; i++)
		cin>>maze[i];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
		{
			if (maze[i][j] == 'S')
			{
				sx = i; sy = j;
			}
			if (maze[i][j] == 'G')
			{
				gx = i; gy = j;
			}
		}
	bfs();
	cout<<d[gx][gy]<<endl;
 
	return 0;
}
