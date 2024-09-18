#include <iostream>
#include <string>
using namespace std;
int main() {
    string fruit = "banana";
    int number;
    int num1;
    bool isLoop = true;
    if (fruit == "banana") {
        cout<<"you have a banana"<<endl;
    } else if (fruit == "apple") {
        cout<<"you have an apple"<<endl;
    } else {
        cout<<"You have something else"<<endl;
    }
    cout<<"____________SWITCH dalis________"<<endl;
    while (isLoop) {
        cout << "Enter number (1-2): ";
        cin >> number;
        switch (number) {
            case 1:
                cout <<"You have a banana"<<endl;
                break;
            case 2:
                cout <<"You have an apple" <<endl;
                break;
            default:
                isLoop = false;
                cout <<"You have something else"<<endl;
        }
    }
    cout<<"----for ciklas----"<<endl;
    cout << "Enter a positive integer: "<<endl;
    cin >> num1;

    int result = 0;

    for(int i = 1; i <= num1; i++) {
        result = result + i; //result += i;
        cout<<"Iteration: "<<i<<" sum: "<<result<<endl;
    }

    cout<<"Sum: "<<result<<endl;
    return 0;
}
