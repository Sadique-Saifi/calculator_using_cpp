#include <iostream>
using namespace std;



int main() {
    int num1, num2;
    char operation;
    int result;

    // Prompt for the first number
    cout<< "Enter the first number: ";
    cin >> num1;

    // Prompt for the operation
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Prompt for the second number
    cout << "Enter the second number: ";
    cin >> num2;

   
    
     // Perform the calculation based on the operator
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            // Handle division by zero
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
            } else {
                cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            cout << "Error: Invalid operator entered." << std::endl;
            break;
    }

   return 0;
}
