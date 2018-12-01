#include<iostream>
#include<string>
using namespace std;
class vehicle {
private:
    double MaxSpeed;
    double Weight;
public:
    vehicle(double MS,double WE) {
        MaxSpeed = MS;
        Weight = WE;
    }
    ~vehicle() {

    }
    double GetMaxSpeed() {
        return MaxSpeed;
    }
    double GetWeight() {
        return Weight;
    }
    void Run() {
        cout << "The MaxSpeed of the vehicle is " << MaxSpeed << endl;
        cout << "The Weight of the vehicle is " << Weight << endl;
    }
    void  Stop() {
        cout << "The vehicle has stopped!!!" << endl;
    }
};
class bicycle :virtual public vehicle {
private:
    double Height;
public:
    bicycle(double MS,double WE,double HE):vehicle(MS, WE) {
        Height = HE;
    }
    ~bicycle() {

    }
    double GetHeight() {
        return Height;
    }
    void Run() {
        cout << "The height of the bicycle is "<< Height << endl;
    }
    void Stop() {
        cout << "The bicycle has stopped!" << endl;
    }
};
class motorcar :virtual vehicle {
private:
    int SeatNum;
public:
    motorcar(double MS, double WE,  int SN):vehicle(MS,WE) {
        SeatNum = SN;
    }
    ~motorcar() {

    }
    int GetSeatNum() {
        return SeatNum;
    }
    void Run() {
        cout << "The SeatNum of the motorcar is "<< SeatNum << endl;
    }
    void Stop() {
        cout << "The motorcar has stopped!" << endl;
    }
};
class motorcycle :public bicycle, public motorcar {
public:
    motorcycle(double m, double w, double h, double n) :vehicle(m, w), bicycle(m, w, h), motorcar(m, w, n) {

    }
    ~motorcycle() {

    }
    void Run() {
        cout << "This is a motorcycle:" << endl;
        cout << "MaxSpeed:" << GetMaxSpeed() << endl;
        cout << "Weight:" << GetWeight() << endl;
        cout << "Height:" << GetHeight() << endl;
        cout << "SeatNum:" << GetSeatNum() << endl;
    }
    void Stop() {
        cout << "The motorcycle has stopped!!!" << endl;
    }
};
int main() {
    vehicle  t1(12.0, 12.0);
    t1.Run();
    t1.Stop();
    bicycle t2(16.0, 15.2, 36);
    t2.Run();
    t2.Stop();
    motorcar t3(13, 65, 33);
    t3.Run();
    t3.Stop();
    motorcycle t4(12, 56, 8, 4);
    t4.Run();
    t4.Stop();
    return 0;
}
