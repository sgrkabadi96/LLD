#include <bits/stdc++.h>
using namespace std;
;

class Employee
{
public:
    string name;
    int hoursWorked;
    double hourlyRate;

    Employee(string name, int hoursWorked, double hourlyRate)
    {
        this->name = name;
        this->hoursWorked = hoursWorked;
        this->hourlyRate = hourlyRate;
    }
};

class SalaryCalculator
{
public:
    static double calculateSalary(Employee &employee)
    {
        return employee.hoursWorked * employee.hourlyRate;
    }
};

class EmployeePrinter
{
public:
    static void printEmployeeDetails(Employee &employee)
    {
        cout << "Employee Name: " << employee.name << endl;
        cout << "Hours Worked: " << employee.hoursWorked << endl;
        cout << "Hourly Rate: " << employee.hourlyRate << endl;
        cout << "Salary: " << SalaryCalculator::calculateSalary(employee) << endl;
    }
};

class EmployeeDatabase
{
public:
    static void saveToDatabase(Employee &employee)
    {
        cout << "Saving to DB " << endl;
    }
};
int main()
{
}