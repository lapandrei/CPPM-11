#include <iostream>
#include "Counter.h"
#include <string>
#include "Windows.h"

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::string choice;
	std::cin >> choice;	
	Counter foo;
	if (choice == "да") {
		std::cout << "Введите начальное значение счётчика: ";
		int num;
		std::cin >> num;
		Counter count(num);		
		foo = count;
	}	
	char ch = '0';
	while (ch != 'x') {
		std::cout << "Введите команду('+', '-', '=' или 'x'): ";
		std::cin >> ch;
		switch (ch) {
			case '+': foo.incrementCounter(); break;
			case '-': foo.decrementCounter(); break;
			case '=': foo.showCounter(); break;
		}
	}
	std::cout << "До свидания!";
}
