#include <iostream>
#include<string>//用C++字符串包含头文件
using namespace std;
int main()
{
//1、C风格字符串
	//注意事项 char 字符串名[]
	//等号后面要用""
	char str[]="hello world";
	cout<<str<<endl;
//2、C++风格字符串
	//包含一个头文件 #include<string>
	string str2="hello world";
	cout<<str2<<endl;
	cout << str2.length() << endl;
	system("pause");
	return 0;
}