#include "GradeBook.cpp"
int main()
{
    GradeBook book1("math");//以类定义
    GradeBook book2("English");
    cout<<"第一本书的初始名称："
        <<book1.get()
        <<"\n第二本书的初始名称："
        <<book2.get()<<endl;
        book2.set("art");
    cout<<"\n第一本书之后的名称："
        <<book1.get()
        <<"\n第二本书之后的名称："
        <<book2.get()<<endl;
}