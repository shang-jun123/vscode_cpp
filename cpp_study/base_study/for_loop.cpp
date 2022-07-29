// for循环语句
//作用：满足循环条件，执行循环语句
//语法: for(起始表达式;条件表达式;末尾循环体){循环语句;}

#include<iostream>
using namespace std;
int main(){
    //for循环
    //从数字 0 打印到数字 9
   /* 
   for (int i = 0; i < 10;i++){
        cout << i << endl;
    }
    */
   //敲桌子案例
   //1、先输出1~100数字
    for (int i = 1; i <= 100;i++){
        //从100个数字中找到特殊数字，打印“敲桌子”
        if(i%7==0||i%10==7||i/10==7){
           cout << "敲桌子"<< endl; 
        }
        else{
            cout << i << endl;
        }
       
    }
    system("pause");
    return 0;
}
