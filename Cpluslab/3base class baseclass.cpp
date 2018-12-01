#include <iostream>
class BaseClass
{
public:
    BaseClass() { std::cout << "基类建造成功\n"; }
    ~BaseClass() { std::cout << "关闭基类\n"; }
private:
    int Number;
};

class DerivedClass :public BaseClass
{
public:
    DerivedClass() { std::cout << "创建派生类\n"; }
    ~DerivedClass() { std::cout << "关闭派生类\n"; }
};

int main()
{
    DerivedClass m;
    m.~DerivedClass();
    getchar();
}
