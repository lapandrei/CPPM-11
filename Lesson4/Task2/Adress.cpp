#include "Adress.h"

Adress::Adress(std::string city, std::string street, int house, int flat) {
	this->city = city;
	this->street = street;
	this->house = house;
	this->flat = flat;
}
std::string Adress::get_output_adress() {
	return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);

}