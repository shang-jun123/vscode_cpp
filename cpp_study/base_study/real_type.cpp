#include<iostream>
using namespace std;
int main()
{
	//1、单精度 float
	//2、双精度 double
	//默认情况下输出一个小数，会显示六位有效数字 
	float f1=3.1415926525f;
	cout<<"f1="<<f1<<endl;
	double d1=3.14;
	cout<<"d1="<<d1<<endl;
	cout<<"float的占用内存空间为："<<sizeof(float)<<endl;
	cout<<"double的占用内存空间为："<<sizeof(d1)<<endl;
	//科学计数法
	float f2=3e2;//3*10^2
	cout<<"f2="<<f2<<endl;
	float f3=3e-2;//3*0.1^2
	cout<<"f3="<<f3<<endl;
system("pause");
return 0;
}