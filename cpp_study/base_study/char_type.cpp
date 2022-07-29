#include <iostream>
using namespace std;
int main()
{
	//1、字符型变量创建方式
	char ch='a';
	cout<<ch<<endl;
	
	//2、字符型变量所占内存大小
	cout<<"字符型变量所占内存空间："<<sizeof(ch)<<endl;
	//3、字符型变量常见错误
	//char ch2="b";
	char ch2 ='abcd';
	cout<<ch2<<endl;
	//4、字符型变量对应ASSCII编码
	cout<<(int)ch<<endl;
	//a-97
	//A-65
	//转义字符
	//换行符\n
	cout<<"hello world\n";
	//反斜杠
	cout<<"\\"<<endl;
	//水平制表符 \t整齐的输出数据
	cout<<"aaaa\thelloword"<<endl;
		cout<<"aaa\thelloword"<<endl;
			cout<<"aaaaaa\thelloword"<<endl;
			
	system("pause");
	return 0;

}