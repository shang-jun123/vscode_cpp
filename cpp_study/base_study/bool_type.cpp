#include<iostream>
using namespace std;
int main()
{
//1、创建bool数据类型
	bool flag=true;
	cout<<flag<<endl;
	flag=false;
	cout<<flag<<endl;
	//1代表真 0代表假
//2、所占内存空间
	cout<<"bool所占内存空间"<<sizeof(true)<<endl;

	system("pause");
	return 0;
}