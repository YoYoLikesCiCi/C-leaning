#include<iostream>
using namespace std;
class Animal
{
protected: //设为保护类型
    int age;
public:
    void setAge(int n);
};

class Dog : public Animal
{
public:
    void setAge(int a)//在基类Animal成员函数setAge(int n)中直接给age赋值
    {
        age = a;
        cout<<"我现在"<<age<<"岁"<<endl;
    }
    void setAge();
};

void Dog::setAge() //类外定义Dog类的成员函数getAge
{
    cout<<"我是一条狗"<<endl;
}

int main()
{
    Dog dog; //创建Dog类的对象dog
    dog.setAge(); //显示“我是一条狗“
    dog.setAge(3);//调用getAge获得其年龄并显示之
    return 0;
}
