#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача номер 1 Сортировка первых 5 - ти элементов
	/*std::cout << "Задача1. \nИзначальный массив: \n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1;    //[1.....10]
		//=rand() % (b+1 - a)+a;
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	//пузырьковая
	//
//	for (int i = size1 - 1; i > 0; i--)
//		for (int j = 0; j < i; j++)
	//		if (arr1[j], arr1[j + 1])
	//			std::swap(arr1[j], arr1[j + 1]);

	// быстрая сорт
	std::sort(arr1, arr1 + 5);


	std::cout << "Итоговый массив: \n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << " ";
	std::cout << "\n\n";

	*/

	//Задача номер 2  температура в январе
	
	/*
	
	std::cout << "задача 2. \nТемепература за все дни января\n";

	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-1 +1 -30)-30;    //[-30....-1]

		std::cout << arr2[i] << " ";

	}
	std::cout << "\b\b.\n"  "Введите максимальну температуру для отображения -->";
	std::cin >> n;
	int sum = 0;
	int  counter = 0;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] <=n)
		counter++;

	}
	std::cout << " Средняя температура за месяц = " << (double)sum / size2 << "\n";
	std::cout << " Количество дней в которых температура опускалась ниже " << n << " градусов " << counter << "\n\n";
	*/
	// Задча 3 вхождение в диапозон
	
	/*

	std::cout << "задача 3. \nВведите начало диапозона\n";
	std::cin >> n;
	std::cout << "Введите в конец диапозона, -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << " Массив: \n";
	{
		{
			for (int i{}; i < size3; i++) {
					arr3[i] = rand() % 100;         //[0....100]
		if (arr3[i] >= n && arr3[i] <= m) {
			std::cout << i + 1 << " ." << arr3[i] << "!\n";
		}
		else
			std::cout << i + 1 << " ." << arr3[i] << "\n";
			
		std::cout << std::endl;
		// if (1<=m)




	}


	*/

	// Система контроля версии











	return 0;



}








