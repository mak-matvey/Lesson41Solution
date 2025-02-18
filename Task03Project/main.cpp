#include <iostream>
#define N 5
#define M 10
#define MAX_MARK 10

using namespace std;

int main()
{

	int classes[N][N]{};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			classes[i][j] = rand() % (MAX_MARK + 1);
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << "[" << i << ", " << j << "] ";
		}
		cout << endl;
	}

	return 0;
}