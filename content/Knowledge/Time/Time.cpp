#include "Time.h"
/*Time::Time()
    :hour(0),minute(0),second(0)
{
}*/
Time::Time(int hour,int minute,int second)
{
    set(hour,minute,second);
}
void Time::set(int h,int m,int s)
{
    if((h>=0&&h<24)&&(m>=0&&m<60)&&(s>=0&&s<60))
    {

        hour=h;
        minute=m;
        second=s;
    }
    else {
        throw invalid_argument("某项数值不在范围内");
    }
}
void Time::printUniversal() const
{
    cout<<setfill('0')
    <<setw(2)<<hour<<":"
    <<setw(2)<<minute<<":"
    <<setw(2)<<second;//set长度,setfill填充物
}
void Time::printStandard() const
{
    cout<<((hour==0||hour==12)?12:hour%12)<<":"<<setfill('0')
    <<setw(2)<<minute<<":"
    <<setw(2)<<second<<(hour<12?" AM":" PM");
}
int Time::gethour() const
{
    return hour;
}
int &Time::badSetHour(int hh)
{
    if(hh>=0&&hh<24){
        hour=hh;
    }
    else {
        throw invalid_argument("时间超出了范围。");
    }
    return hour;
}