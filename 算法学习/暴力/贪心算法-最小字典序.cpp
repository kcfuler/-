//挑战程序设计竞赛 贪心法 字典序最小问题
//可以采用贪心来思考：要构成字典序最小的字符串，可以转化为当前选取的每一个字符的字典序都最小
//所以就在头部和尾部选取字符进行比较，选择最小的那个
//当字符相同时我们想要更小的那个在后面的选择中先出现，所以就继续对应的向后比较，选择较小的那一边
//实现方面使用两个数代表指针，进行比较和选取 

#include <iostream>
using namespace std;

const int maxn=100000;
char c[maxn+1];//这里要注意给字符预留一个位置存放 '/0'。

void solve ()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>c[i];
	//设置两个指针开始比较 
	int s=0,t=n-1;
	 
	while(s<=t)//这里取等是因为当相等的时候还需要输出对应的那个字符
	{
		bool left=true;//用来判断从哪一边取走字符
		for(int i=0;i+s<t;i++)
		{
			if(c[ s+i ]>c[ t-i ])
			{
				left=false;
				break;
			}
			else if(c[s+i]<c[t-i])
			{
				left=true;
				break;
			}
		}
		if(left) cout<<c[s++];
		else cout<<c[t--]; 
	} 
}

int main ()
{
	solve();
	return 0;
} 
