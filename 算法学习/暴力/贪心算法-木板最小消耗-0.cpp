 //��ս������ƾ��� ̰�ķ� ���ľ���и������С���� ԭ��
 //��ʵ�����Ŀ��ԭ���൱����
 
 
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
		}//�ҵ���С������
		//��ʼ�����Ӻϲ�
		int t=l[mi1]+l[mi2];
		ans+=t;
	if(mi1==n-1) swap(mi1,mi2);//��һ����ȷ���ϲ��������鲻�ᶪʧ 
		l[mi1]=t;
		l[mi2]=l[n-1]; //��һ�У����mi2�պ������һ����������n-- ����������������������һ��,�ͻᱻ�滻����֮��һ�����������һѭ�� 
		n--;//ѭ����������������� 
	}
	cout<<ans<<endl;
}

int main()
{
	solve();
	return 0;
} 
