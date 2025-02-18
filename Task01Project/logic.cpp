#include <string>
using namespace std;

int sum(int* array, int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum;
}

string best_class(float avgA, float avgB, float avgC)
{
	return avgA > avgB && avgA > avgC ? "A" : avgB > avgC ? "B" : "C";
}