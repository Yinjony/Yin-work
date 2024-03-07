#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <iomanip>//setw,setfill
#include <stdexcept>
using namespace std;
class Time
{
public:
    /*Time();与Time.cpp中的头一行的注释对应，那种是一种初始化的方法，而下面这种是另一种*/
    explicit Time(int=0,int=0,int=0);//需要set函数来对其进行赋值
    void set(int,int,int);
    void printUniversal() const;
    void printStandard() const;
    int gethour() const;//与badSetHour函数配合，检验hour值是否被改变
    int &badSetHour(int);//修改private值
private:
    int hour;
    int minute;
    int second;
};
#endif