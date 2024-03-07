#include <iostream>
#include <iomanip>//??
#include <vector>//类似数组的东西
#include <stdexcept>//使用类out_of_range的时候需要这个
using namespace std;
void outputVector(vector<int>&);
void inputVector(vector<int>&);
int main()
{    
    vector<int> a(7);//c++数组的定义，int是类型
    vector<int> b(10);
    cout<<"数组大小："<<a.size()<<"\n请赋值(17)"<<endl;//X.size()函数用于返回数组大小
    inputVector(a);
    inputVector(b);
    cout<<"a内容:"<<endl;
    outputVector(a);
    cout<<"\nb内容:"<<endl;
    outputVector(b);
    if(a!=b){//vector，数组可以相互比较
        cout<<"\n不相等"<<endl;
    }
    vector<int> c(a);//可以嵌套定义，等价于vector<int>c=a
    cout<<"c内容"<<endl;
    outputVector(c);
    a=b;//数组间可以覆盖
    cout<<"\n崭新的两个数组"<<endl;
    outputVector(a);
    cout<<endl;
    outputVector(b);
    if(a==b){
        cout<<"\n相等"<<endl;
    }
    a[5]=1000;//修改方法同c
    cout<<"改了之后"<<endl;
    outputVector(a);
    try{
        cout<<"\n试图打印a[15]"<<endl;
        cout<<a.at(15)<<endl;//试图访问数组15
    }
    catch(out_of_range &ex){//try，catch错误异常分析，out。。。是可能出现的错误
        cout<<"错误来源于："<<ex.what()<<endl;
    }
}
void outputVector(vector<int> &a)
{
    int i;
    for(i=0;i<a.size();i++){
        cout<<setw(3)<<a[i];
    }
}
void inputVector(vector<int> &a)
{
    for(int i=0;i<a.size();i++){
        cin>>a[i];
    }
}
