#include "Calculator.h"

double Calculator::add() {
	return num1 + num2;
}
double Calculator::multiply() {
	return num1 * num2;
}
double Calculator::subtract_1_2() {
	return num1 - num2;
}
double Calculator::subtract_2_1() {
	return num2 - num1;
}
double Calculator::divide_1_2() {
	return num1 / num2;
}
double Calculator::divide_2_1() {
	return num2 / num1;
}
bool Calculator::set_num1(double num1) {
	bool rsl = false;
	if (num1 != 0) {
		this->num1 = num1;
		rsl = true;
	}
	return rsl;
}
bool Calculator::set_num2(double num2) {
	bool rsl = false;
	if (num2 != 0) {
		this->num2 = num2;
		rsl = true;
	}
	return rsl;
}

