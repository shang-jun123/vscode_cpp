#include<iostream>
using namespace std;
int main()
{  
	//选择结构 单行if语句
	//用户输入分数，如果分数大于600，视为考上一本大学，在屏幕上输出
	//1、用户输入分数
	int score=0;
	cout<<"请输入一个分数"<<endl;
	cin>>score;
	//2、打印用户输入的分数
	cout<<"您输入的分数为："<<score<<endl;
	//3、判断分数是否大于600，如果大于，那么输出恭喜您考上了一本
	//注意事项：if条件后面不要加分数
	if (score>600)
	{
	cout<<"恭喜您考上了一本"<<endl;
	}
	//选择结构 多条件if语句
	//大于600一本大学，大于500二本大学，大于400三本大学，小于等于400未考上大学
	else if (score>500)
		{
	cout<<"恭喜您考上了二本"<<endl;
	}
	else if (score>400)
		{
	cout<<"恭喜您考上了三本"<<endl;
	}
	//选择结构 多行if语句
	//如果小于，输出未考上一本大学
	else//不大于600分，执行else后大括号中的内容
	{
		cout<<"您未考上大学"<<endl;
	}


system("pause");
return 0;
}