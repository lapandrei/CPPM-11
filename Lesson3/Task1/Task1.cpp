#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "Calculator.h"

int main()
{
    setlocale(LC_ALL, "RU");
    double num1;
    double num2;
    bool rsl1;
    bool rsl2;
    Calculator calc;
    while (true) {
        do {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            rsl1 = calc.set_num1(num1);
            if (!rsl1) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (!rsl1);
        do {    
            std::cout << "Введите num2: ";
            std::cin >> num2;            
            rsl2 = calc.set_num2(num2);
            if (!rsl2) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (!rsl2);       
        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;        
        std::cin.get();
        std::cin.get();
        system("cls");
    }
}
