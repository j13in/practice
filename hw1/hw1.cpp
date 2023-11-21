#include <iostream>

int main()
{
	int i, j, k;
	int N = 7;
	int array[] = { 5, 3, 1, 2, 5, 6, 9 };

	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1; j++)
		{
			int temp;

			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (k = 0; k < N; k++)
		std::cout << array[k] << " ";

	return 0;
}