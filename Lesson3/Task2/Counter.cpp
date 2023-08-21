#include "Counter.h"
#include <iostream>

Counter::Counter() {
	counter = 1;
}
Counter::Counter(int num) {
	counter = num;
}
void Counter::decrementCounter() {
	--counter;
}
void Counter::incrementCounter() {
	++counter;
}
void Counter::showCounter() {
	std::cout << counter << std::endl;
}
