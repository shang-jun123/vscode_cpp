/*
函数的定义的步骤
1、返回值类型
2、函数名
3、参数列表
4、函数体语句
5、return 表达式
语法：
返回值类型 函数名（参数列表）
{
    函数体语句;
    return 表达式;
}
*/
#include<iostream>
using namespace std;

int add(int num1,int num2){
    return num1 + num2;
}
//值传递
//如果函数不需要返回值，声明为 void
//当我们做值传递时，函数的形参发生改变，并不会影响实参
void swap(int num1,int num2){
    cout << "交换前：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2<<endl ;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2<<endl ;

    return;  //返回值不需要的时候，可以不写return
}
//常见的函数样式
//1、无参无返
void test01(){
    cout << "this is test01" << endl;
}

//2、有参无返
void test02(int a){
    cout << "this is test02 a=" << a << endl;
}
//3、无参有返
int test03(){
    cout << "this is test03" << endl;
    return 1000;
}
//4、有参有返
int test04(int a){
    cout << "a=" << a << endl;
    return a;
}


int main(){
    int sum = 0;
    int a = 0;
    int b = 10;
    //cout << "请输入a的值：" << endl;
    //cin >> a;
    sum=add(a,b);
    //cout  << "sum="<<sum << endl;
    swap(a, b);
    cout << "交换后：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" <<b<<endl;
    test01();
    test02(100);
    int num1 = test03();
    cout << "num1=" << num1 << endl;
    int num2 = test04(10000);
    cout << "num2=" << num2 << endl;

    system("pause");
    return 0;
}

