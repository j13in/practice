#include <iostream>

int main()
{
	int i, j, k;
	int N = 7;
	int array[] = { 1,7,8,3,9,2,4 };

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