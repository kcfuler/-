//想确定一下string的存储方式 
//emm ,是每一个字符后都有‘0’，再由很多个字符组成字符串 
//转换成数字的话需要对每一位都进行操作 
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string a;
	cin>>a;
	int b;
	b=a-'0';
	cout<<b<<endl;
	return 0;	
}
