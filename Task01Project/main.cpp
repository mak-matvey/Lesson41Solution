#include "util.h"
#include <ctime>
#define SIZE 10

int main()
{
	int array[SIZE];

	random_init(array, SIZE, 0, 10);

	cout << "Marks: " << convert(array, SIZE) << endl;

	float sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		sum += array[i];
	}

	float avg = sum / SIZE;

	cout << "Average mark: " << avg << endl;

	return 0;
}