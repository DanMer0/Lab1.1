/*Шипулин Иван - ИВТ-12м
Вариант 22 - Опишите параметризованную функцию сортировки выборкой.
Продемонстрируйте использование функции для разных типов данных*/


#include <iostream> 
using namespace std;

int main()
{
	const int length = 5;
	int array[length] = { 312, 532, 22, 1320, 430 };

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{

		// Начинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
		int smallestIndex = startIndex;

		// Затем ищем элемент поменьше в остальной части массива
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			// Если мы нашли элемент, который меньше нашего наименьшего элемента,
			if (array[currentIndex] < array[smallestIndex])
				// то запоминаем его
				smallestIndex = currentIndex;
		}

		// smallestIndex теперь наименьший элемент. 
		// Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
		swap(array[startIndex], array[smallestIndex]);
	}

	// Теперь, когда весь массив отсортирован - выводим его на экран
	for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';

	return 0;
}