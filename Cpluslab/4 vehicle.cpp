//
//  main.cpp
//  vehicle2
//
//  Created by 孙起 on 2018/12/1.
//  Copyright © 2018 孙起. All rights reserved.
//

#include<iostream>
using namespace std;
class Vehicle{
public:
    virtual void Run(){cout<<"Vehicle::Run called\n";}
    virtual void Stop(){cout<<"Vehicle::Stop called\n";}
};
class motorcar:public Vehicle{
public:
    void Run(){cout<<"motorcar::Run called\n";}
    virtual void Stop(){cout<<"motorcar::Stop called\n";}
};
class bicycle :public Vehicle{
public:
    virtual void Run(){cout<<"bicycle::Run called\n";}
    void Stop(){cout<<"bicycle::Stop called\n";}
};
class motorcycle:public bicycle,public motorcar{
public:
    void Run(){cout<<"motorcycle::Run called\n";}
    void Stop(){cout<<"motorcycle::Stop called\n";}
};

int main(){
    Vehicle ve;
    bicycle bi;
    motorcar mo;
    motorcycle mocy;
    Vehicle *pclass=&ve;
    pclass->Run();
    pclass->Stop();
    pclass=&bi;
    pclass->Run();
    pclass->Stop();
    pclass=&mo;
    pclass->Run();
    pclass->Stop();
    return 0;
}
