#include <iostream>
#include <string>

struct Adress {
    std::string city;
    std::string street;
    int numberOfHouse;
    int numberOfFlat;
    int postIndex;
    
    Adress(std::string city, std::string street, int numberOfHouse, int numberOfFlat, int postIndex) {
        this->city = city;
        this->street = street;
        this->numberOfHouse = numberOfHouse;
        this->numberOfFlat = numberOfFlat;
        this->postIndex = postIndex;
    }
};

void adressShow(Adress& s) {
    std::cout << "Город: " << s.city << '\n';
    std::cout << "Улица: " << s.street << '\n';
    std::cout << "Номер дома: " << s.numberOfHouse << '\n';
    std::cout << "Номер квартиры: " << s.numberOfFlat << '\n';
    std::cout << "Индекс: " << s.postIndex << '\n';
}

int main()
{
    setlocale(LC_ALL, "ru");
    Adress rsl("Москва", "Арбат", 12, 8, 123456);
    Adress val("Ижевск", "Пушкина", 59, 143, 953769);
    adressShow(rsl);
    adressShow(val);
}
