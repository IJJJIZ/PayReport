
#include <iostream>
#include <conio.h>

using namespace std;

struct Employee {
    int ID;
    string FirstName;
    string LastName;
    float HoursWorked;
    float HourlyRate;
};


void GetEmployeeInformation(Employee* empsInfo, int size) {
    for (int i = 0; i < size; i++) {
        cout << "------------" << "\n";
        int displayInt = i + 1;
        cout << "Enter the ID for Employee " << displayInt << ": ";
        cin >> empsInfo[i].ID;
        cout << "Enter the First Name for Employee " << displayInt << ": ";
        cin >> empsInfo[i].FirstName;
        cout << "Enter the Last Name for Employee " << displayInt << ": ";
        cin >> empsInfo[i].LastName;
        cout << "Enter the Hours Worked for Employee " << displayInt << ": ";
        cin >> empsInfo[i].HoursWorked;
        cout << "Enter the Hourly Rate for Employee " << displayInt << ": ";
        cin >> empsInfo[i].HourlyRate;
        cout << "\n";
    }
}

void DisplayPayReport(Employee* empsInfo, int size) {
    cout << "Pay Report" << "\n";
    cout << "------------" << "\n";
    float totalPay = 0;
    for (int i = 0; i < size; i++)
    {
        float currentPay = empsInfo[i].HoursWorked * empsInfo[i].HourlyRate;
        totalPay += currentPay;
        cout << empsInfo[i].ID << ". " << empsInfo[i].FirstName << " " << empsInfo[i].LastName << ": $" << currentPay << "\n";
    }
    cout << "\nTotal pay: $" << totalPay;
}


int main()
{
    int size;
    cout << "Size of employee array: ";
    cin >> size;
    Employee* empsInfo = new Employee[size];
    GetEmployeeInformation(empsInfo, size);
    DisplayPayReport(empsInfo, size);
    delete[] empsInfo;
	(void)_getch();
	return 0;
}