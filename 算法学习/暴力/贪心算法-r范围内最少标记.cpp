//挑战程序设计竞赛 贪心算法 其它例题中的第一个  选取最小的标记数
//题目中说到需要最少的标记数
//当没有思路的时候，可以从一些比较特别的数据出发（第一个、最后一个、中间的数据），寻找思路
//这道题的解题思路就是从第一个数据出发，向右寻找（因为第一个数据向左已经没有意义了）在给定的半径内寻找最远的一个点来打上标记
//这样对于这一次选择就可以达到 最优的效果，然后重复这个过程就可以达到全局最优，也就得到解答

#include <iostream>
#include <algorithm>
using namespace std;

const int maxn=1000;
int x[maxn],n,r;

void solve()
{
	cin>>n;
	cin>>r;
	for(int i=0;i<n;i++) cin>>x[i];
	sort(x,x+n);
	
	int i=0,ans=0;//标记数组和保存答案 
	
	while(i<n)
	{
		int s=x[i++];
		while(i<n && s+r>=x[i]) i++;//寻找r范围内最远的点 
		int p=x[i-1];//因为加到这里的时候就已经等于后面一个点了，需要打标记的是前面的一位
    	while(i<n && p+r>=x[i]) i++;
		// i--; 想要直接在一个循环内切换点的话可能会导致 在相邻距离为r的两个点之间反复横跳，进入死循环 
		ans++; 
	}
	cout<<ans<<endl;
	
}

int main ()
{
	solve();
	return 0;
} 
