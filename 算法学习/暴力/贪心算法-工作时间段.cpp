//��ս������ƾ��� ̰���㷨 ����ʱ��
//��Ҫ��˼���� ��ÿ�ζ�ѡȡ����ʱ������Ĺ�������ɾֲ�����,����֤���󣬿��Դﵽ��������
//������ѧϰ������ѡ�ü�ֵ�������ĺ��ʵ����ݽṹ���Դ����߱����Ч�� 
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
    sort(p,p+n);//��ʱ������򣬷������ѡȡ 
    int t=0;
    for(int i=0;i<n;i++)//ÿ�δӽ���ʱ�������ʱ�����ѡȡ 
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
