#include <iostream>
using namespace std;

void functionOne(int num1, int& num2, char letter);
void functionTwo(int& num1, int num2, char& letter);
int main() {
    int number1, number2;
    char ch;

    number1 = 10;
    number2 = 15;
    ch = 'A';

    cout <<"Viduje main: number1 = "<<number1<<", number2 = "<<number2<<" ir ch = "<<ch<<endl;
    functionOne(number1, number2, ch);
    cout <<"Viduje main po pirmos funkcijos iskvietimo: number1 = "<<number1<<", number2 = "<<number2<<" ir ch = "<<ch<<endl;
    functionTwo(number1, number2, ch);
    cout <<"Viduje main po antros funkcijos iskvietimo: number1 = "<<number1<<", number2 = "<<number2<<" ir ch = "<<ch<<endl;
    cout <<"number1 adresas "<<&number1<<endl;
    return 0;
}

void functionOne(int num1, int& num2, char letter) {
    int num3;

    num3 = num1;
    num1++;
    num2 = num2 * 2;
    letter = 'B';
}

void functionTwo(int& num1, int num2, char& letter) {

    num1++;
    num2 = num2 * 2;
    letter = 'C';
    cout <<"num1 adresas "<<&num1<<endl;
}