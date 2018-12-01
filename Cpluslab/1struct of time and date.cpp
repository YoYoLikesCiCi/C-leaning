# include <iostream>
using namespace std;
typedef struct
{
    int year ;
    int month ;
    int day;
    int hour ;
    int minute ;
    int second ;
} Time ;
int main()
{
    Time *time = new Time() ;
    cout << "请输入年份：" ;
    cin >> time->year ;
    cout << "请输入月份：";
    cin >> time->month ;
    cout << "请输入日期：";
    cin >> time->day ;
    cout << "请输入小时：";
    cin >> time->hour ;
    cout << "请输入分钟：" ;
    cin >> time->minute ;
    cout << "请输入秒：" ;
    cin >> time->second ;
    cout << "你输入的日期是："<<time->year<<"年"<<time->month<<"月"<<time->day<<"日"<<time->hour<<"时"<<time->minute<<"分"<<time->second<<"秒\n";
    return 0 ;
}
