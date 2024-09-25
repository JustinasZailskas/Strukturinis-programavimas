#include <iostream>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int num;
    double firstNum, secondNum;
    char ch = 'T';

    cout << fixed << showpoint<< setprecision(2) << endl;

    cout << "Is " <<ch << " a lowercase letter " << islower(ch) <<endl;

    cout << "4.5 to the power 6.0 = " <<pow(4.5, 6) <<endl;

    cout << "Enter two decimal numbers "<<endl;
    cin >> firstNum >> secondNum;
    cout << endl;
    cout << firstNum << " to the power of " << secondNum << " = "<<pow(firstNum, secondNum)<<endl;

    num = -32;
    cout << "Absolute value of "<<num<< " = "<< abs(num) << endl;
    return 0;
}
