#include <iostream>
#include <limits>

void displayMenu() {
    std::cout << "\nSimple Calculator\n";
    std::cout << "1. Addition (+)\n";
    std::cout << "2. Subtraction (-)\n";
    std::cout << "3. Multiplication (*)\n";
    std::cout << "4. Division (/)\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an operation (1-5): ";
}

int main() {
    double num1, num2, result;
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        // Input validation for the menu
        if (std::cin.fail() || choice < 1 || choice > 5) {
            std::cin.clear(); // Clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            std::cout << "Invalid choice. Please select a valid option.\n";
            continue;
        }

        if (choice == 5) {
            std::cout << "Exiting the calculator. Goodbye!\n";
            break;
        }

        // Prompt user for two numbers
        std::cout << "Enter the first number: ";
        std::cin >> num1;
        std::cout << "Enter the second number: ";
        std::cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                std::cout << "Result: " << num1 << " + " << num2 << " = " << result << "\n";
                break;
            case 2:
                result = num1 - num2;
                std::cout << "Result: " << num1 << " - " << num2 << " = " << result << "\n";
                break;
            case 3:
                result = num1 * num2;
                std::cout << "Result: " << num1 << " * " << num2 << " = " << result << "\n";
                break;
            case 4:
                if (num2 == 0) {
                    std::cout << "Error: Division by zero is not allowed.\n";
                } else {
                    result = num1 / num2;
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << result << "\n";
                }
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    } while (true);

    return 0;
}

