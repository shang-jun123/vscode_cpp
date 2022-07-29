#include <iostream>
#include<stdio.h>
#define Day 7
//单行注释
/*
多行注释
*/
/*常量的定义方式
1、#define 宏常量
2、const 修饰的常量

*/
using namespace std;

//main是程序的入口
int main()
{	int a=10;
    //Day =14;

	printf("你好\n");
	//输出hello world
	cout <<"hello world" << endl ;
	cout <<"a=" <<a<< endl ;
	cout << "一周总共有" << Day << "天" <<endl;
	const int month=12;
	//month=24;
	cout<<"一年共有"<<month<<"月"<<endl;

	system("pause");
	return 0;

}