#include <iostream>

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int num1, num2;

    std::cout << "Enter the first number:";
    std::cin >> num1;
    std::cin.ignore();

    std::cout << "Enter the second number:";
    std::cin >> num2;
    std::cin.ignore();

    int result = add(num1, num2);

    std::cout << "Sum:" << result;

    std::cin.ignore();

    return 0;
}
