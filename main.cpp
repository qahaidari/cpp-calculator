// include lines
#include <iostream>
#include "calc.h"

int main() {
    Calc calc;
    int choice;
    
    do {
        calc.welcome();
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        if (choice == 5) {
            std::cout << "Exiting the app. Goodbye!" << std::endl;
            break;
        }

        double x, y;
        
        switch (choice)
        {
        case 1:
            calc.user_inputs(x, y);
            std::cout << "Result: " << calc.add(x, y) << std::endl;
            break;
        case 2:
            calc.user_inputs(x, y);
            std::cout << "Result: " << calc.subtract(x, y) << std::endl;
            break;
        case 3:
            calc.user_inputs(x, y);
            std::cout << "Result: " << calc.multiply(x, y) << std::endl;
            break;
        case 4:
            calc.user_inputs(x, y);
            std::cout << "Result: " << calc.divide(x, y) << std::endl;
            break;
        default:
            std::cout << "Invalid choice! Please try again." << std::endl;
            break;
        }

        std::cout << std::endl; // for better readability
        
    } while (true);

    return 0;
}