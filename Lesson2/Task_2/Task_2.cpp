#include <iostream>
#include <string>

struct BankDeposite {
    int numberOfAccount;
    std::string name;
    int balance;
};

void setBalance(BankDeposite& s, int newBalance) {
    s.balance = newBalance;
}

int main()
{
    setlocale(LC_ALL, "ru");
    BankDeposite s;
    std::cout << "Введите номер счета: ";
    std::cin >> s.numberOfAccount;
    std::cout << "Введите имя владельца: ";
    std::cin >> s.name;
    std::cout << "Введите баланс: ";
    std::cin >> s.balance;
    int newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;
    setBalance(s, newBalance);
    std::cout << "Ваш счет: " << s.name << ", " << s.numberOfAccount << ", " << s.balance;
}

