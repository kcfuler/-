#include<iostream>
#include<algorithm>       //ע��POJ��֧��<bits/stdc++.h>������ʵʵдͷ�ļ�
using namespace std;

int N,M;                  //ע��Ҫ�����ȫ�ֱ���
char a[100][100];         //����field����

void dfs(int i,int j)
{
    a[i][j]='.';        //��ǰλ����'W'�������滻��'.' �������׺��ӵ�һ��
    int nx,ny;          //�����ǰλ�õ��ڽ�(����ͨ)�л�ˮ�����¼������Ϊ(nx,ny)
    for(int dx=-1;dx<=1;dx++)
        for(int dy=-1;dy<=1;dy++)
        {   //Ҫ������˸����򣬼򻯳��������򣬼����������
            nx=i+dx; ny=j+dy;
            if(nx>=0 && nx<=N && ny>=0 && ny<=M && a[nx][ny]=='W')
            {    //Ҫȷ������λ��û�г�������Χ���Ҹ�λ���л�ˮ���ſ����µ�����
                dfs(nx,ny);
            }
        }
}

int main()
{

    cin>>N>>M;               //�����һ��
    for(int i=0;i<N;i++)     
        for(int j=0;j<M;j++)
        {
            cin>>a[i][j];     //field����Ľ���
        }
    int ans=0;                //ponds������Ҳ����DFS����

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
