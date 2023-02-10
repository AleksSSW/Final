#include <iostream>
#include<cstdlib>
#include<ctime>;
#include<algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n,m;
	int sum;

	std::cout << "hello world!\n\n";
	//Задача 1. Сортировка половины массива
	/*std::cout << "Задача 1.\nИзначальный массив:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1; //[1..10]
		std::cout << arr1[i] << ' ';

	}
	std::cout << '\n';
	//Пузырьковая сортировка
	//for(int i=size1-1;i>0; i--)//начинаем с большего занчения, поэтому ограничиваем
		//for (int j = 0; j < i; j++) {
			//if (arr1[j] > arr1[j + 1])//проверяет, является ли текущий элемент больше, чем предыдущий
				//std::swap(arr1[j], arr1[j + 1]);//меняет элементы местами
              //} 
				//Быстрая сортировка:
	std::sort(arr1, arr1+5);

	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";*/
	//Задача 2. Температура в январе
	/*std::cout << "Задача 2.\nТемпература за все дни января:\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-1+1-(-30))+(-30); //[-30..-1] т.к -30 меньше чем -1, то оно будет использовано в начале
		std::cout << arr2[i] << " ,";
      }
	std::cout << "\b\b.\n";
	sum = 0; // сумма для среднего арифметического
	int counter = 0;// кол-во дней для < n;
	std::cout << "Введите максимальную границу температуры (от -30 до -1)-> ";
	std::cin >> n;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "Кол-во дней, когда температура опускалась ниже" << n << " градусов:" << counter << '\n';
	std::cout << "Средняя температура за месяц: " << (double)sum / size2 << "\n\n";*/
		//Задача 3. Вхождение в диапазон
	/*std::cout << "Задача 3. ВВедите начало диапазона - > ";
	std::cin >> n;
	std::cout << "ВВедите конец диапазона -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << " Вывод:\n";
	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101; // [0..100]
		if (arr3[i] > n && arr3[i] < m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else
			std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
	std::cout << std::endl;*/
		
		
		return 0;
}