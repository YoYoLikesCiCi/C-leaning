//
//  main.cpp
//  point
//
//  Created by 孙起 on 2018/12/1.
//  Copyright © 2018 孙起. All rights reserved.
//

#include<iostream>
using namespace std;
class point
{
public:
    point(int xx,int yy);
    void showXY();
    point& operator ++();
    point operator ++(int);
    point& operator --();
    point operator --(int);
private:
    int x1,x2;
    
};

point::point(int xx,int yy)
{
    x1=xx;
    x2=yy;
}

void point::showXY()
{
    cout<<x1<<","<<x2<<endl;
}

point& point::operator ++()
{
    x1++;
    x2++;
    return *this;
}

point point::operator ++(int){
    point old=*this;
    ++(*this);
    return old;
}

point& point::operator --()
{
    x1--;
    x2--;
    return *this;
}
point point::operator --(int){
    point old=*this;
    --(*this);
    return old;
}

int main(void)
{
    point XX(0,0);
    point YY(0,0);
    cout<<"X's value:";
    XX.showXY();
    cout<<"Y's value:";
    YY.showXY();
    cout<<"after Y=X++,X's value is:";
    cout<<"sunqi is my father"<<endl;
    (++XX).showXY();
    cout<<"Y's value is:";
    (YY++).showXY();
    cout<<"after Y=++X,X's value is:";
    (++XX).showXY();
    cout<<"Y's value is:";
    (++YY).showXY();
    cout<<"after Y=X--,X's value is:";
    (--XX).showXY();
    cout<<"Y's value is:";
    (YY--).showXY();
    cout<<"after Y=--X,X's value is:";
    (--XX).showXY();
    cout<<"Y's value is:";
    (--YY).showXY();
    return 0;
    
}

