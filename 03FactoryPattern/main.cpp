#include <bits/stdc++.h>

using namespace std;

class Vehicle
{
public:
    virtual void printVehicle() = 0;
};

class TwoWheelers : public Vehicle
{
public:
    void printVehicle()
    {
        cout << "Two wheelers" << endl;
    }
};

class FourWheelers : public Vehicle
{
public:
    void printVehicle()
    {
        cout << "Four wheelers" << endl;
    }
};

class VehicleFactory
{
public:
    virtual Vehicle *createVehicle() = 0;
};

class TwoWheelersFactory : public VehicleFactory
{
public:
    Vehicle *createVehicle()
    {
        return new TwoWheelers();
    }
};

class FourWheelersFactory : public VehicleFactory
{
public:
    Vehicle *createVehicle()
    {
        return new FourWheelers();
    }
};

int main()
{
    TwoWheelersFactory twoWheelerFactory;
    Vehicle *twoWheeler = twoWheelerFactory.createVehicle();
    twoWheeler->printVehicle();

    FourWheelersFactory fourWheelerFactory;
    Vehicle *fourWheeler = fourWheelerFactory.createVehicle();
    fourWheeler->printVehicle();
}