#pragma once
class Counter
{
public:
	Counter();
	Counter(int num);
	void decrementCounter();
	void incrementCounter();
	void showCounter();
private:
	int counter;
};

