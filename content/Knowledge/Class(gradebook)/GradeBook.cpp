#include "GradeBook.h"
GradeBook::GradeBook(string name)//定义的时候都加上"类名::""
{
    set(name);
}
void GradeBook::set(string name)
{
    if(name.length()<=5)//length与size的效果似乎一样，用于返回字符串的长度，包含在string库中
      courseName=name;
    else {
        courseName=name.substr(0,5);//用于输出指定长度的字符串，前者是初始位置，后者是输出长度
        cerr<<"名称\""<<name<<"\"超过了5个字符\n"//cerr只能输出到显示器上，详细的意义目前不懂
        <<"将其限制在5个字符\n"<<endl;
    }
}
string GradeBook::get() const
{
    return courseName;
}
void GradeBook::display() const
{
    cout<<"欢迎使用教科书\n"<<get()
    <<"!"<<endl;
}