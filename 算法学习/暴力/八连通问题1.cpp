#include<iostream>
#include<algorithm>       //注意POJ不支持<bits/stdc++.h>，老老实实写头文件
using namespace std;

int N,M;                  //注意要定义成全局变量
char a[100][100];         //最大的field矩阵

void dfs(int i,int j)
{
    a[i][j]='.';        //当前位置是'W'，将其替换成'.' ，很容易忽视的一步
    int nx,ny;          //如果当前位置的邻近(八连通)有积水，则记录其坐标为(nx,ny)
    for(int dx=-1;dx<=1;dx++)
        for(int dy=-1;dy<=1;dy++)
        {   //要搜索完八个方向，简化成两个方向，即横向和纵向
            nx=i+dx; ny=j+dy;
            if(nx>=0 && nx<=N && ny>=0 && ny<=M && a[nx][ny]=='W')
            {    //要确保搜索位置没有超出矩阵范围并且该位置有积水，才开辟新的搜索
                dfs(nx,ny);
            }
        }
}

int main()
{

    cin>>N>>M;               //输入第一行
    for(int i=0;i<N;i++)     
        for(int j=0;j<M;j++)
        {
            cin>>a[i][j];     //field矩阵的建立
        }
    int ans=0;                //ponds个数，也就是DFS次数

    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        {
            if(a[i][j]=='W')
            {
                dfs(i,j);
                ans++;
            }
        }
    cout<<ans<<endl;
}
