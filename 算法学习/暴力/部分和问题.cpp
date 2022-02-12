//挑战程序设计竞赛
//dfs,穷竭搜索
//感觉里面有用到动态规划的方法
#include <iostream>
using namespace std;

const int maxn=1000;
int n,a[maxn],k;

//感觉就像是逐步构建一颗二叉树，然后自底向上（深度优先）搜索 

bool dfs(int i,int sum)
{
	//if(sum==k) return true;
	if(n==i) return sum==k;
	if( dfs(i+1,sum) ) return true;
	//if( dfs( i+1 , sum + a[i+1]) )   这样写是有问题的，因为你往下一个状态转移的时候加上的应该是对应的量，而不是前一个状态的量 
	if( dfs(i+1,sum+a[i+1]) ) return true;
	return false; 
}

int main ()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>k;
	if(dfs(0,0))
	{
		cout<<"Yes"<<endl;
    }
    else {
    	cout<<"No"<<endl;
    }
	return 0;
} 
