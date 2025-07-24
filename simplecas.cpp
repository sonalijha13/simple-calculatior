
#include <iostream>
#include <cmath>    // For sqrt() and pow()
using namespace std;

// Function declarations
double add(double a, double b)    { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }

double divide(double a, double b) {
    if (b != 0) return a / b;
    else {7
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

// 🔁 RENAMED to avoid conflict
int modulo(int a, int b) {
    if (b != 0) return a % b;
    else {
        cout << "Error: Modulus by zero!" << endl;
        return 0;
    }
}

double power(double base, double exp) {
    return pow(base, exp);
}
double squareRoot(double a) {
    if (a >= 0) return sqrt(a);
    else {
        cout << "Error: Negative input for square root!" << endl;
        return 0;
    }
}

int main() {
    int choice;
    double num1, num2, result;
    char again;

    do {
        cout << "\n==== Scientific Calculator Menu ====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Modulus (%)\n";
        cout << "6. Power (x^y)\n";
        cout << "7. Square Root (√)\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << add(num1, num2) << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << subtract(num1, num2) << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << multiply(num1, num2) << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Result: " << divide(num1, num2) << endl;
                break;

            case 5:
                int int1, int2;
                cout << "Enter two integers: ";
                cin >> int1 >> int2;
                cout << "Result: " << modulo(int1, int2) << endl;
                break;

            case 6:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                cout << "Result: " << power(num1, num2) << endl;
                break;

            case 7:
                cout << "Enter number: ";
                cin >> num1;
                cout << "Result: " << squareRoot(num1) << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\nDo you want to perform another operation? (y/n): ";
        cin >> again;

    } while(again == 'y' || again == 'Y');

    cout << "Thank you for using the calculator!" << endl;
    return 0;
}
