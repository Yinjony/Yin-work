#include "xigou.h"
xigou::xigou(int ID,string messageString)
    :objectID(ID),message(messageString)
{
    cout<<"任务"<<objectID<<"   构造函数运行  "<<message<<endl;
}
xigou::~xigou()
{
    cout<<(objectID==1||objectID==6?"\n":"");
    cout<<"任务"<<objectID<<"   析构函数运行  "<<message<<endl;
}