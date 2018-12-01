//
//  main.cpp
//  lab3_1.cpp
//
//  Created by 孙起 on 2018/11/17.
//  Copyright © 2018 孙起. All rights reserved.
//
//lab3_1.cpp
#include <iostream>
enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};
using namespace std;
class CPU
{
private:
    CPU_Rank rank;
    int frequentcy;
    float voltage;
public:
    CPU(CPU_Rank r,int f, float v)
    {
        rank = r;
        frequentcy = f;
        voltage = v;
        cout << "构造了一个CPU！" << endl;
    }
    ~CPU(){cout << "析构了一个CPU！" << endl;}
    
    CPU_Rank GetRank() const {return rank;}
    int GetFrequency() const{return frequentcy;}
    float GetVoltage() const{return voltage;}
    
    void SetRank (CPU_Rank r) {rank = r;}
    void SetFrequency (int f) {frequentcy = f;}
    void SetVoltage (float v) {voltage = v;}
    
    void Run() {cout << "CPU开始运行！" << endl;}
    void Stop() {cout << "CPU停止运行!" << endl;}
};

int main()
{
    CPU a(P6,300,2.8);
    a.Run();
    a.Stop();
    return 0;
}
