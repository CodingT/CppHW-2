#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int id, age, numeps, oldAge, oldId, taxId;
    double hours, rate, pay, tax, netpay, highTax;
highTax = 0;
oldAge = 0;
numeps = 0;

cout << " Please enter Emploee id#"<<endl;
cin >> id;

while (id>0) {

 cout << "Enter the hours " << endl;
  cin >> hours;

 cout << "Enter the rate" << endl;
  cin >> rate;

 cout << "Enter the age" << endl;
  cin >> age;


    pay = hours * rate;
   if (hours > 40)
    pay = pay + rate * (hours - 40) * 0.5 ;


 if ( age >=55 )
    tax = pay * 0.2 ;
  else
      tax = pay * 0.1 ;


  netpay = pay - tax;

 cout << " Emploee id# "  << id << endl;
 cout << " Emploee is " << age << " years old" << endl;
 cout << " Hours worked " << hours <<endl;
 cout << " Rate of pay $ "<< rate <<endl;
 cout << " Pay is $ " << pay <<endl;
 cout << " Taxes is $" << tax << endl;
     cout << endl << endl;
 cout << " NET PAY IS $ " << netpay << endl;
     cout << endl << endl;


  cout << " Enter id, or press 0 to stop " <<endl;

  cin >> id;

numeps++;

if (age > oldAge){
    oldAge = age;
    oldId = id;
}
if (tax > highTax){
    highTax = tax;
    taxId = id;
}

}

    cout << "Total number of employees processed: " << numeps << endl;
    cout << "Oldest Employee is ID# " << oldId <<"   " << oldAge << " Years old"<< endl;
    cout << "Employee ID#  " << taxId << " Payed the most taxes of $ "<< highTax << endl;
    cout << endl << endl;

    cout << "PAYROLL PROGRAM IS COMPLETE ! " << endl;
    return 0;
}
