#include <iostream>
#include "calc.h"

Calc::Calc()
{
    std::cout << "Calculator started." << std::endl;
}

Calc::~Calc()
{
    std::cout << "Calculator terminated." << std::endl;
}

void Calc::welcome()
{
    std::cout << "Welcome!" << std::endl;
    std::cout << "Choose an operation from below list:" << std::endl;
    std::cout << "1. Add" << std::endl;
    std::cout << "2. Subtract" << std::endl;
    std::cout << "3. Multiply" << std::endl;
    std::cout << "4. Divide" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

double Calc::add(double x, double y)
{
    return x + y;
}

double Calc::subtract(double x, double y)
{
    return x - y;
}

double Calc::multiply(double x, double y)
{
    return x * y;
}

double Calc::divide(double x, double y)
{
    if (y == 0)
    {
        std::cerr << "Error: Division by zero." << std::endl;
        return 0;
    }
    return x / y;
}

void Calc::user_inputs(double &x, double &y) // this method is used to get user inputs as reference parameters
{
    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;
}