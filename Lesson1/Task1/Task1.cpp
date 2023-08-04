#include <iostream>
#include <fstream>

void arrayWriteFile(int* array, int size, std::ofstream& fout) {
	fout << size << '\n';
	for (auto i = 0; i < size; ++i) {
		fout << array[i] << " ";
	}
	
}
int main()
{
	setlocale(LC_ALL, "Russian");
	std::ifstream fin;
	fin.open("in.txt");
	int sizeOne;
	int sizeTwo;
	if (fin.is_open()) {
		fin >> sizeOne;
		int* arrayOne = new int[sizeOne];
		fin >> arrayOne[4];
		for (auto i = 0; i < sizeOne - 1; ++i) {
			fin >> arrayOne[i];
		}
		fin >> sizeTwo;
		int* arrayTwo = new int[sizeTwo];		
		for (auto i = 1; i < sizeTwo; ++i) {
			fin >> arrayTwo[i];
		}
		fin >> arrayTwo[0];	
		std::cout << "Массивы считаны." << '\n';
		std::cin.get();		
		std::ofstream fout;
		fout.open("out.txt");
		if (fout.is_open()) {
			arrayWriteFile(arrayTwo, sizeTwo, fout);
			fout << '\n';
			arrayWriteFile(arrayOne, sizeOne, fout);
		}
		else {
			std::cout << "Файл не создан!";
		}
		
		std::cout << "Массивы записаны.";
	}
	else {
		std::cout << "Файл не найден!";
		return -1;
	}

}
