#include <iostream>
using namespace std;
int main()
{
//短整型 -32768~32767
	short  num1=32768;
//整型
	int num2=10;
//长整型
	long num3=10;
//长长整型
	long long num4=10;
 cout <<"num1="<<num1<< endl;
 cout<<"num2="<<num2<<endl;
 cout<<"num3="<<num3<<endl;
 cout<<"num4="<<num4<<endl;
 //可以利用sizeof()求出数据类型占用内存大小
 //语法：sizeof(数据类型/变量)
 cout<<"short占用内存空间为："<<sizeof(short)<<endl;
 cout<<"int占用内存空间为："<<sizeof(num2)<<endl;
 cout<<"long占用内存空间为："<<sizeof(num3)<<endl;
  cout<<"longlong占用内存空间为："<<sizeof(num4)<<endl;
system("pause");
  
return 0;
}