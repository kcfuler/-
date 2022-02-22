 //挑战程序设计竞赛 贪心法 解决木板切割完的最小开销 原解
 //其实这道题目的原解相当精妙
 
 
#include <iostream>
using namespace std;

const int maxn=10000;
int l[maxn],ans;

void solve()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>l[i];
	
	while(n>1)
	{
		int mi1=0,mi2=1;
		if(l[mi1]<l[mi2]) swap(mi1,mi2);
		for(int i=2;i<n;i++)
		{
			if(l[i]<l[mi1])
			{
				mi2=mi1;
				mi1=i;
			}
			else if(l[i]<l[mi2])
			{
				mi2=i;
			}
		}//找到最小的两个
		//开始将板子合并
		int t=l[mi1]+l[mi2];
		ans+=t;
	if(mi1==n-1) swap(mi1,mi2);//这一行是确保合并的那两块不会丢失 
		l[mi1]=t;
		l[mi2]=l[n-1]; //这一行，如果mi2刚好是最后一个，就随着n-- ，丢弃，而如果它不是最后一个,就会被替换，总之它一定不会进入下一循环 
		n--;//循环进行与结束的条件 
	}
	cout<<ans<<endl;
}

int main()
{
	solve();
	return 0;
} 
