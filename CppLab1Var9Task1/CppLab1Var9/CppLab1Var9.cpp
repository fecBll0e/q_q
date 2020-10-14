/*
	1. Объявить массив из n=20 целых чисел, проинициализировать нулями. Функция
	processArray() должна заполнить массив случайными числами от одного до пяти,
	вычислить и вернуть наименее часто встречающееся значение в массиве (если таких
	несколько, вернуть наименьшее из них) и сформировать выходной массив из всех
	элементов входного, отсортированных в порядке возрастания. Вывести на экран
	массивы.

	Вход:

	[13221542312312543324]

	Выход:

	[11112222223333344455]
*/

#include <cstdio>
#include <cstdlib>
using namespace std;

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);

}

int processArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = getRandomNumber(1, 5);
	}

	printf("Input:\n");
	for (int i = 0; i < n; i++) {
		printf("%i ", arr[i]);
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("\nOutput:\n");
	for (int i = 0; i < n; i++) {
		printf("%i ", arr[i]);
	}

	printf("\n");

	int min_count = 1, res = arr[0], curr_count = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1])
			curr_count++;
		else {
			if (curr_count > min_count) {
				min_count = curr_count;
				res = arr[i - 1];
			}
			curr_count = 1;
		}
	}

	if (curr_count < min_count)
	{
		min_count = curr_count;
		res = arr[n - 1];
	}
	printf("The least frequent value: %i", min_count);
	return res;
}

int main()
{
	const int n = 20;
	int arr[n] = { 0 };
	processArray(arr, n);
}