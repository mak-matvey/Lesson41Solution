#include "util.h"
#include "logic.h"
#include <ctime>

int main()
{

	srand(time(0));

	int arrayA[SIZE];
	int arrayB[SIZE];
	int arrayC[SIZE];

	random_init(arrayA, SIZE, 0, MAX_MARK);
	random_init(arrayB, SIZE, 0, MAX_MARK);
	random_init(arrayC, SIZE, 0, MAX_MARK);

	cout << "Marks A: " << convert(arrayA, SIZE) << endl;
	cout << "Marks B: " << convert(arrayB, SIZE) << endl;
	cout << "Marks C: " << convert(arrayA, SIZE) << endl;

	int sumA = sum(arrayA, SIZE);
	int sumB = sum(arrayB, SIZE);
	int sumC = sum(arrayC, SIZE);

	float avgA = (sumA + 0.0) / SIZE;
	float avgB = (sumB + 0.0) / SIZE;
	float avgC = (sumC + 0.0) / SIZE;

	cout << "Average mark in A: " << avgA << endl;
	cout << "Average mark in B: " << avgB << endl;
	cout << "Average mark in C: " << avgC << endl;

	cout << "Best class: " << best_class(avgA, avgB, avgC) << endl;

	return 0;
}