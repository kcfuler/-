//��ս������ƾ���
//dfs,�������
//�о��������õ���̬�滮�ķ���
#include <iostream>
using namespace std;

const int maxn=1000;
int n,a[maxn],k;

//�о��������𲽹���һ�Ŷ�������Ȼ���Ե����ϣ�������ȣ����� 

bool dfs(int i,int sum)
{
	//if(sum==k) return true;
	if(n==i) return sum==k;
	if( dfs(i+1,sum) ) return true;
	//if( dfs( i+1 , sum + a[i+1]) )   ����д��������ģ���Ϊ������һ��״̬ת�Ƶ�ʱ����ϵ�Ӧ���Ƕ�Ӧ������������ǰһ��״̬���� 
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
