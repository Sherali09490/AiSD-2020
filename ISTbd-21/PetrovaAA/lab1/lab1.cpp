
#include <iostream>
#include <ctime>
#define SIZE 1000

int array[SIZE];
int size, key = 0;
int diapazon;

int LinearSearch(int array[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i] == key)
			return i;
	}
	return -1;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	std::cout << "АЛГОРИТМ ЛИНЕЙНОГО ПОИСКА" << std::endl;
	std::cout << std::endl;
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	std::cout << "Введите диапазон значений: ";
	std::cin >> diapazon;
	std::cout << "Введите ключ поиска: ";
	std::cin >> key;
	
	std::cout << "Исходный массив: ";

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % diapazon;
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;
	
	if (LinearSearch(array, size, key) == -1)
		std::cout << "Элемент не найден!" << std::endl;
	else std::cout << "Индекс найденного элемента: " << LinearSearch(array, size, key) << std::endl;

    return 0;
}

