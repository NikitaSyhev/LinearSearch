//������

#include <iostream>

// �������� ����� ������� ��������� �������� value � ������ arr. ����� ���������� � ������� bedin ( �� ��������� 0 )
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}



// �������� ����� ���������� ��������� �������� � ������ arr.
template <typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

// �������� ����� ���������� ��������� �������� � ������ arr. ����� ���������� � ������� begin
template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

//����� �������� � ������� sym
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

	//������� SEARCH_INDEX
	/*std::cout << "������� ����� 7 � ������� = " << search_index(arr, size, 7) << '\n';
	std::cout << "������ ������� ����� 1 � ������� = " << search_index(arr, size, 1) << '\n';


	if (search_index(arr, size, 100) == -1)
		std::cout << "����� 100 ��� � �������\n";
	else
		std::cout << "������� 100 � ������� = " << search_index(arr, size, 100);

	std::cout << "������ ������� ����� 1 ������� � ������� 4 = " << search_index(arr, size, 1, 4) << '\n';*/

	//������� SEARCH_LAST_INDEX

	/*std::cout << "������� ����� 7 � ������� = " << search_last_index(arr, size, 7) << '\n';
	std::cout << "��������� ������� ����� 1 � ������� = " << search_last_index(arr, size, 1) << '\n';

	std::cout << "��������� ������� ����� 1 ������� � ����� 4 = " << search_last_index(arr, size, 1, 4) << '\n';*/
	





	//�������:"��������"
	std::cout << "����������� �����: \n";
	const int letters = 8;
	char word[letters] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	std::cout << "\n��������: \n";
	subword(word, letters, 'n');
	










	return 0;
}

