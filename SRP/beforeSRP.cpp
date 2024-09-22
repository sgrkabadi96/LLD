#include <bits/stdc++.h>

using namespace std;

class Employee
{
private:
    string name;
    int hoursWorked;
    double hourlyRate;

public:
    Employee(string name, int hoursWorked, double hourlyRate)
    {
        this->name = name;
        this->hoursWorked = hoursWorked;
        this->hourlyRate = hourlyRate;
    }

    double calculateSalary()
    {
        return hoursWorked * hourlyRate;
    }

    void printEmployeeDetails()
    {
        cout << "Name : " << this->name << endl;
        cout << "Hours Worked : " << this->hoursWorked << endl;
        cout << "Salary : " << this->calculateSalary() << endl;
    }

    void saveToDB()
    {
        cout << "Save to DB called" << endl;
    }
};

int main()
{

    Employee *e = new Employee("XYZ", 10, 10.1);

    cout << e->calculateSalary() << endl;
    e->saveToDB();
}