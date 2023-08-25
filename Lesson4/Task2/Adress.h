#pragma once
#include <string>

class Adress
{
private:
	std::string city;
	std::string street;
	int house;
	int flat;
public:
	Adress(std::string city, std::string street, int house, int flat);
	std::string get_output_adress();
};