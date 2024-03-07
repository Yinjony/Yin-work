//注意运行的顺序
//先主函数之外的函数运行，然后主函数中的构造函数运行，然后子函数中的构造函数运行，子函数运行结束其中的析构函数运行（倒序），然后继续运行主函数
//结束后倒序运行析构函数，然后均略过静态变量，最后按着子函数种的静态，主函数中的静态，主函数之外的函数的顺序运行析构函数。
#include "xigou.cpp"
void create(void);
xigou first(1,"(主函数之前的全局变量)");
int main()
{
    cout<<"\n主函数开始运行"<<endl;
    xigou second(2,"(主函数中的动态变量)");
    static xigou third(3,"(主函数中的静态变量)");

    create();

    cout<<"\n主函数恢复运行"<<endl;
    xigou fourth(4,"(主函数中的动态变量)");
    cout<<"\n主函数结束运行"<<endl;
}
void create(void)
{
    cout<<"\ncreate函数开始运行"<<endl;
    xigou fifth(5,"(create函数中的动态变量)");
    static xigou sixth(6,"(create函数中的静态变量)");
    xigou seventh(7,"(create函数中的动态变量)");
    cout<<"\ncreate函数结束运行"<<endl;
}