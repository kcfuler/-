//��ս������ƾ��� ̰�ķ� �ֵ�����С����
//���Բ���̰����˼����Ҫ�����ֵ�����С���ַ���������ת��Ϊ��ǰѡȡ��ÿһ���ַ����ֵ�����С
//���Ծ���ͷ����β��ѡȡ�ַ����бȽϣ�ѡ����С���Ǹ�
//���ַ���ͬʱ������Ҫ��С���Ǹ��ں����ѡ�����ȳ��֣����Ծͼ�����Ӧ�����Ƚϣ�ѡ���С����һ��
//ʵ�ַ���ʹ������������ָ�룬���бȽϺ�ѡȡ 

#include <iostream>
using namespace std;

const int maxn=100000;
char c[maxn+1];//����Ҫע����ַ�Ԥ��һ��λ�ô�� '/0'��

void solve ()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>c[i];
	//��������ָ�뿪ʼ�Ƚ� 
	int s=0,t=n-1;
	 
	while(s<=t)//����ȡ������Ϊ����ȵ�ʱ����Ҫ�����Ӧ���Ǹ��ַ�
	{
		bool left=true;//�����жϴ���һ��ȡ���ַ�
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
