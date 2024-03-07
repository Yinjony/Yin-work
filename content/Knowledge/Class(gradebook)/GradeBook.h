#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <string>
#include <iostream>
using namespace std;//一般将所有库和初始化内容放在头文件中
class GradeBook//定义一个类
{
public://公共访问
    explicit GradeBook(string );//构造函数，与类同名，用于初始化内容，无返回值（void也不行）
    void set(string );//一般需要set函数来接收外在信息
    string get() const;//get函数来输出
    void display() const;
private:
    string courseName;//类的内部访问
};
#endif