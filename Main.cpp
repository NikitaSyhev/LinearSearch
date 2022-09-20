//Шаблон

#include <iostream>

// Линейный поиск первого вхождения элемента value в массив arr. Поиск начинается с позиции bedin ( по умолчанию 0 )
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}



// Линейный поиск последнего вхождения элемента в массив arr.
template <typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

// Линейный поиск последнего вхождения элемента в массив arr. Поиск начинается с позиции begin
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

//Вывод подслова с позиции sym
void subword(char arr[], const int length, char sym) {
	int index = search_index(arr, length, sym);
	if (index == 1) {
		std::cout << "Error.\n";
		return;
	}
	for (int i = index; i < length; i++)
		std::cout << arr[i];
	std::cout << '\n';

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	const int size = 10;
	int arr[size]{ 6, 4, 1, 7, -6, 1, 0, 11, 9 };

	//ФУНКЦИЯ SEARCH_INDEX
	/*std::cout << "Позиция числа 7 в массиве = " << search_index(arr, size, 7) << '\n';
	std::cout << "Первая позиция числа 1 в массиве = " << search_index(arr, size, 1) << '\n';


	if (search_index(arr, size, 100) == -1)
		std::cout << "Числа 100 нет в массиве\n";
	else
		std::cout << "Позиция 100 в массиве = " << search_index(arr, size, 100);

	std::cout << "Первая позиция числа 1 начиная с позиции 4 = " << search_index(arr, size, 1, 4) << '\n';*/

	//ФУНКЦИЯ SEARCH_LAST_INDEX

	/*std::cout << "Позиция числа 7 в массиве = " << search_last_index(arr, size, 7) << '\n';
	std::cout << "Последняя позиция числа 1 в масстве = " << search_last_index(arr, size, 1) << '\n';

	std::cout << "Последняя позиция числа 1 начиная с числа 4 = " << search_last_index(arr, size, 1, 4) << '\n';*/
	





	//Задание:"Подслово"
	std::cout << "Изначальное слово: \n";
	const int letters = 8;
	char word[letters] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	std::cout << "\nПодслово: \n";
	subword(word, letters, 'n');
	










	return 0;
}

