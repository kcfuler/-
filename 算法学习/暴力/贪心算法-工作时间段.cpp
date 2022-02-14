//挑战程序设计竞赛 贪心算法 工作时间
//主要的思想是 ：每次都选取结束时间最早的工作，达成局部最优,经过证明后，可以达到整体最优
//还可以学习到的是选用键值对这样的合适的数据结构可以大大提高编码的效率 
#include <iostream>
#include <algorithm> 
using namespace std;

const int maxn=100000;
int s[maxn],t[maxn],ans=0;
pair <int ,int > p[maxn];

void solve()
{
		int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>s[i];
    for(int i=0;i<n;i++) cin>>t[i];
    for(int i=0;i<n;i++) 
    {
    	p[i].first=t[i];
    	p[i].second=s[i];
    }
    sort(p,p+n);//将时间段排序，方便后面选取 
    int t=0;
    for(int i=0;i<n;i++)//每次从结束时间最早的时间段中选取 
    {
    	if(t<p[i].second)
    	{
    		ans++;
    		t=p[i].first;
    	}
    }
}

int main ()
{
	solve();
	cout<<ans<<endl;
	return 0;
}
