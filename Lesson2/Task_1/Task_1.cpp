#include <iostream>

enum Month : int {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main()
{
    setlocale(LC_ALL, "ru");
    int val = -1;
    while (val != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> val;
        switch (val) {
        case Month::JANUARY: std::cout << "JANUARY"; std::cout << "\n"; break;
        case Month::FEBRUARY : std::cout << "FEBRUARY"; std::cout << "\n"; break;
        case Month::MARCH : std::cout << "MARCH"; std::cout << "\n"; break;
        case Month::APRIL : std::cout << "APRIL"; std::cout << "\n"; break;
        case Month::MAY : std::cout << "MAY"; std::cout << "\n"; break;
        case Month::JUNE : std::cout << "JUNE"; std::cout << "\n"; break;
        case Month::JULY : std::cout << "JULY"; std::cout << "\n"; break;
        case Month::AUGUST : std::cout << "AUGUST"; std::cout << "\n"; break;
        case Month::SEPTEMBER : std::cout << "SEPTEMBER"; std::cout << "\n"; break;
        case Month::OCTOBER : std::cout << "OCTOBER"; std::cout << "\n"; break;
        case Month::NOVEMBER : std::cout << "NOVEMBER"; std::cout << "\n"; break;
        case Month::DECEMBER : std::cout << "DECEMBER"; std::cout << "\n"; break;
        case 0: std::cout << "До свидания!"; break;
        default: std::cout << "\nНеправильный номер!\n";
        }
    }    
}


