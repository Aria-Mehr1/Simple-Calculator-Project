#include "../include/Calculator.h"
#include <cmath>

using namespace std;

//This function performs the main calculations based on the operator provided.
double Calculator(double num1 ,char op ,double num2){
    double result = 1;
    double a = 0;
    const double epsilon = 0.0001;
    switch (op) {
        case '+' : return num1 + num2;
        case '-' : return num1 - num2;
        case '*' : return num1 * num2;
        case '/' :
            if(num2 == 0){
                return NAN;
            }else{
                return num1 / num2;
            }
        case '^':
            if (num2 == 0) return 1;
            if (num2 < 0) return NAN;
            for (int i = 0; i < num2; i++) {
                result *= num1;
            }
            return result;
        //calculate the nth root of a number.
        case 's':
            if (num2 < 2 || num1 < 0) {
                return NAN;
            } else {
                double number = num1 - epsilon;
                while (true) {
                    double power = 1;
                    for (int i = 0; i < (int)num2; i++) {
                        power *= a;
                    }
                    if (power > number) {
                        break;
                    }
                    a += epsilon;
                }
                return a;
            }
        //calculate factorial of a number.
        //Only works for non-negative integers.
        case '!':
            for (int i = 1; i <= num1 ; ++i) {
                result *= i;
            }
            return result;
        default:
            return NAN;
    }
}