#include "Time.cpp"
int main()
{
    //第一部分
    Time t;
    cout<<"最初的国际时间：";
    t.printUniversal();
    cout<<"\n最初的标准时间：";
    t.printStandard();//说明初始值不赋那就是0。

    t.set(13,27,6);//修改

    cout<<"\n\n修改过后的国际时间：";
    t.printUniversal();
    cout<<"\n修改过后的标准时间：";
    t.printStandard();

    try
    {
        t.set(99,99,99);//尝试无效修改
    }
    catch(invalid_argument &e)
    {
        cout<<"\n\n错误："<<e.what()<<endl;
    }

    cout<<"\n尝试过无效修改之后的国际时间：";
    t.printUniversal();
    cout<<"\n标准时间：";
    t.printStandard();

    //第二部分
    int &hourRef=t.badSetHour(20);//使用了参数引用后可以改变hour的值
    int hourR=t.badSetHour(20);
    cout<<"\n修改之前："<<hourRef<<" "<<hourR;
    hourR=30;
    cout<<"\n修改之后（hourR）："<<t.gethour();//没改变
    hourRef=30;
    cout<<"\n修改之后（hourRef）："<<t.gethour();//改变了
    t.badSetHour(12)=74;//可作左值被赋值改变
    cout<<"\n赋值："<<t.gethour();

    //第三部分
    Time t1;
    Time t2(2);
    Time t3(21,34);//各种各样的赋值
    cout<<"\nt1：";
    t1.printUniversal();
    cout<<"\nt2：";
    t2.printUniversal();
    cout<<"\nt3:";
    t3.printUniversal();


}