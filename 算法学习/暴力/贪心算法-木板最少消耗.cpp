//挑战程序设计竞赛 贪心法 解决木板切割完的最小开销
//主要的思想是二叉树，因为每一次切割都将对应的木板块切成两半，而且切割的开销等于木板本身的长度
//所以最终的开销就等于 木板长度*二叉树的深度
//由此可以推出 当最短和次短的木板为二叉树的最深度的兄弟结点的时候就可以得到最小
// 所以以这个思想将木板排好序，再递归到最后一块木板就可以得到答案

#include <iostream>
#include <algorithm>
using namespace std;

const int maxn=100000;
int l[maxn],ans=0;

void solve()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>l[i];
	sort(l,l+n);
	int p2=l[0];
	for(int i=1;i<n;i++)
	{
		p2+=l[i];//也就是模拟从最深的二叉树的那个地方遍历上来，循环相当于起到了一个 乘以深度 的作用 
		ans+=p2;
	}
	cout<<ans<<endl;
}

int main ()
{
	solve();
	return 0;
} 
