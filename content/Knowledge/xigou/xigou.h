#include <iostream>
#include <string>
using namespace std;
#ifndef XIGOU_H
#define XIGOU_H
class xigou 
{
public:
    xigou(int,string);
    ~xigou();
private:
    int objectID;
    string message;
};
#endif