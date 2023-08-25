#include <iostream>
#include <fstream>
#include "Windows.h"
#include "Adress.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);       
    std::ifstream fin;
    fin.open("in.txt");
    if (!fin) {
        std::cout << "Произошла ошибка";
        return -1;
    }
     int number;
        fin >> number;
    std::string city;
    std::string street;
    int house;
    int flat;
    Adress** array;
    array = new Adress*[number];
    for (auto i = 0; i < number; ++i) {
        fin >> city; 
        fin >> street;
        fin >> house; 
        fin >> flat;        
        array[i] = new Adress(city, street, house, flat);
    } 
    fin.close();
    std::ofstream fout;
    fout.open("out.txt");
    if (!fout) {
        std::cout << "Произошла ошибка";
        return -1;
    }
    fout << number << std::endl;        
    for (auto i = 0; i < number; ++i) {
        fout << array[number - 1 - i]->get_output_adress() << std::endl;        
    }
    fout.close();
    for (auto i = 0; i < number; ++i) {
        delete array[i];
    }
    delete[] array;
}
