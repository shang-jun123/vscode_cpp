#include <iostream>
using namespace std;
int main ()
{
//加减乘除
int a1=10;
int b1=3;
cout<<a1+b1<<endl;
cout<<a1-b1<<endl;
cout<<a1*b1<<endl;
cout<<a1/b1<<endl;//整数相除为整数
int a2=10;
int b2=20;
cout<<a2/b2<<endl;
int a3=10;
int b3=0;
//cout<<10/0<<endl;除数不为零
//两个小数可以相除
double d1=0.5;
double d2=0.22;
cout<<d1/d2<<endl;
//取模运算本质：就是求余数
//两个小数不可以进行取模运算
cout<<a1%b1<<endl;
//1、前置递增
int a=10;
++a;
cout<<"a="<<a<<endl;


//2、后置递增
int b=10;
b++;
cout<<"b="<<b<<endl;
//3、前置和后置的区别
//前置递增 先让变量+1 然后进行表达式运算
int a4=10;
int b4=++a4*10;
cout<<"a4="<<a4<<endl;
cout<<"b4="<<b4<<endl;
//后置递增
int a5=10;
int b5=a5++*10;
cout<<"a5="<<a5<<endl;
cout<<"b5="<<b5<<endl;


system("pause");
return 0;


}