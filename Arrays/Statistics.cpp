

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

char Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (int)arr[i];
	}
	return sum;
}

int Avg(int arr[], const int n)
{
	double avg = ((double)Sum(arr, n) / n) * 1000;
	return avg;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

float Avg(float arr[], const int n)
{
	return Sum(arr, n) / n;
}

char Avg(char arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (int)arr[i];
	}
	double avg = sum / n;
	return avg;
}
int MinValueIn(int arr[], const int n)
{
	int arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)arr_min = arr[i];
	}
	return arr_min;
}

double MinValueIn(double arr[], const int n)
{
	double arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)arr_min = arr[i];
	}
	return arr_min;
}

float MinValueIn(float arr[], const int n)
{
	float arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)arr_min = arr[i];
	}
	return arr_min;
}

char MinValueIn(char arr[], const int n)
{
	char arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)arr_min = arr[i];
	}
	return arr_min;
}

int MaxValueIn(int arr[], const int n)
{
	int arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)arr_max = arr[i];
	}
	return arr_max;
}

double MaxValueIn(double arr[], const int n)
{
	int arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)arr_max = arr[i];
	}
	return arr_max;
}

float MaxValueIn(float arr[], const int n)
{
	float arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)arr_max = arr[i];
	}
	return arr_max;
}

char MaxValueIn(char arr[], const int n)
{
	char arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)arr_max = arr[i];
	}
	return arr_max;
}