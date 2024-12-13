#include <iostream>
#include "../include/Calculator.h"

using namespace std;

int main(){
    cout << "Welcome to Simple Calculator" << endl;
    double num1 , num2;
    char op , ch;
    while (true){ // Infinite loop to allow multiple calculations.
        cout << "Enter the first number : "; // Prompt user for input.
        cin >> num1;
        cout << "Enter operator (+, -, *, /, ^, s, !) : ";
        cin >> op;
        switch (op) {
            case '!': // Handle factorial separately since it only requires one operand.
                cout << "Result : " << num1<< "!" << " " << " = " << Calculator(num1 , '!' , false);
                break;
            case 's':
                cout << "Enter the second number : ";
                cin >> num2;
                cout << "Result : " << "root_" << num2 << " = " << Calculator(num1 , 's' , num2);
                break;
            default:
                cout << "Enter the second number :";
                cin >> num2;
                cout << "Result : " << num1<< " " << op << " " << num2 << " = " << Calculator(num1 , op , num2);
        }
        cout << endl <<"Would you like to continue? (y/n):"; // Ask user if they want to continue.
        cin >> ch;
        if (ch == 'n' || ch =='N'){
            cout << "Goodbye";
            break;
        }
    }
}
