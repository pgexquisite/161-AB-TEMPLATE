//*****************************************************************************
// Author: Pavel Gorshenkov
// Assignment: ASSIGNMENT_1
// Date: 01/08/2025
// Description:
// Sources: 
//*****************************************************************************

#include <iostream>

using namespace std;

int main() {

int employeeIdNum, hoursWorkedNum;

double hourRate, grossPay, federalTax, netPay, fedWithholdRate;


cout << "Welcome to your Payroll Portal!" << endl << endl; 


cout << "Please enter your Employer ID: ";
cin >> employeeIdNum;
cout << endl << endl;


cout << "Please enter the # of hours worked: "; 
cin >> hoursWorkedNum;
cout << endl << endl; 


cout << "Please enter your Hourly Rate : $"; 
cin >> hourRate;
cout << endl << endl; 


cout << "Please enter the Federal Withholding Rate: $";
cin >> fedWithholdRate; 
cout << endl << endl; 

cout << endl << endl; 

 grossPay = hoursWorkedNum * hourRate;
 
 federalTax = grossPay * fedWithholdRate / 100;

 netPay = grossPay - federalTax;

 cout << "Payroll summary for the following pay period: " << endl << endl;

 cout << "Total Gross Pay: $" << grossPay << endl << endl; 

 cout << "Total Federal Withholding: $" << federalTax << endl << endl; 

 cout << "Net Pay: $" << netPay << endl << endl; 

cout << "Thank you! Have a great rest of your day!" << endl << endl;
  
  return 0;
}
