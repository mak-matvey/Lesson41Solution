#define N 5

int sum_elements(int matrix[N][N])
{
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}

int sum_extrlemal_elements(int matrix[N][N])
{
	int sum = 0;

	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			sum += matrix[i][N - 1- j];
		}
	}

	return sum;
}