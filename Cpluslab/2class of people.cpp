#include <iostream>
using namespace std;
class data
{                         //data类的定义
public:
    data(int y=0,int m=0,int d=0)    //构造函数
    {
        year=y;
        month=m;
        day=d;
    }
    data(data &mybirthday);
    int gety() {return year;}
    int getm() {return month;}
    int getd() {return day;}
    void ouput(){cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;}
private:
    int year;
    int month;
    int day;
};
data::data(data &mybirthday)    //复制构造函数的实现
{
    year=mybirthday.year;
    month=mybirthday.month;
    day=mybirthday.day;
}
class people
{               //personal类的定义
public:                        //外部接口
    people(int n,char s,int i,data b);
    people(people &liming);
    void input();
    void output();
private:
    int number;
    char sex;
    int id;
    data birthday;              //data类的对象birthday
};
//组合类的构造函数实现
people::people(int n,char s,int i,data b):number(n),sex(s),id(i),birthday(b){}
//组合类的复制构造函数实现
people::people(people &liming):number(liming.number),sex(liming.number),id(liming.id){}
void people::output()
{
    cout<<"学号："<<number<<"  性别： "<<sex<<"  身份证号： "<<id<<endl;
    birthday.ouput();
}

int main()
{
    data mybirthday(1926,8,17);
    people  jiangzhuxi(1720505,'m',3429231,mybirthday);
    cout<<"my information is:"<<endl;
    jiangzhuxi.output();
    cout << "选做3演示完毕\n\n" << endl;
    return 0;
}
