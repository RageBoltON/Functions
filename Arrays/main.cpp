#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 11, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 65, int maxRand = 90);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);
void Sort(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);
//int Sum_char_to_int(int arr[], const int n);

int Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
char Avg(char arr[], const int n);

int MinValueIn(int arr[], const int n);
double MinValueIn(double arr[], const int n);
float MinValueIn(float arr[], const int n);
char MinValueIn(char arr[], const int n);

int MaxValueIn(int arr[], const int n);
double MaxValueIn(double arr[], const int n);
float MaxValueIn(float arr[], const int n);
char MaxValueIn(char arr[], const int n);

void ShiftLeft(int arr[], const int n, int shift_l);
void ShiftLeft(double arr[], const int n, int shift_l);
void ShiftLeft(float arr[], const int n, int shift_l);
void ShiftLeft(char arr[], const int n, int shift_l);

void ShiftRight(int arr[], const int n, int shift_r);
void ShiftRight(double arr[], const int n, int shift_r);
void ShiftRight(float arr[], const int n, int shift_r);
void ShiftRight(char arr[], const int n, int shift_r);

void main()
{
	setlocale(LC_ALL, "");



	const int n = 5;
	int arr[n];
	int shift_l = 1;
	int shift_r = 2;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	ShiftLeft(arr, n, shift_l);
	Print(arr, n);
	ShiftRight(arr, n, shift_r);
	Print(arr, n);
	cout << "MinValueIn: " << MinValueIn(arr, n) << endl;
	cout << "MaxValueIn: " << MaxValueIn(arr, n) << endl;
	cout << "Summa: " << Sum(arr, n) << endl;
	cout << "Avg: " << Avg(arr, n) / 1000. << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	ShiftLeft(brr, SIZE, shift_l);
	Print(brr, SIZE);
	ShiftRight(brr, SIZE, shift_r);
	Print(brr, SIZE);
	cout << "MinValueIn: " << MinValueIn(brr, SIZE) << endl;
	cout << "MaxValueIn: " << MaxValueIn(brr, SIZE) << endl;
	cout << "Summa: " << Sum(brr, SIZE) << endl;
	cout << "Avg: " << Avg(brr, SIZE) << endl;

	const int char_size = 10;
	char charr[char_size];
	//int charr_int[char_size];
	FillRand(charr, char_size);
	Print(charr, char_size);
	Sort(charr, char_size);
	Print(charr, char_size);
	ShiftLeft(charr, char_size, shift_l);
	Print(charr, char_size);
	ShiftRight(charr, char_size, shift_r);
	Print(charr, char_size);
	cout << "MinValueIn: " << MinValueIn(charr, char_size) << endl;
	cout << "MaxValueIn: " << MaxValueIn(charr, char_size) << endl;
	cout << "Summa: " << Sum(charr, char_size) << endl;
	cout << "Avg: " << (int)Avg(charr, char_size) << endl;

	const int float_size = 10;
	float flo_arr[float_size];
	FillRand(flo_arr, float_size);
	Print(flo_arr, float_size);
	Sort(flo_arr, float_size);
	Print(flo_arr, float_size);
	ShiftLeft(flo_arr, float_size, shift_l);
	Print(flo_arr, float_size);
	ShiftRight(flo_arr, float_size, shift_r);
	Print(flo_arr, float_size);
	cout << "MinValueIn: " << MinValueIn(flo_arr, float_size) << endl;
	cout << "MaxValueIn: " << MaxValueIn(flo_arr, float_size) << endl;
	cout << "Summa: " << Sum(flo_arr, float_size) << endl;
	cout << "Avg: " << Avg(flo_arr, float_size) << endl;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	minRand *= 10;
	maxRand *= 10;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " " << (int)arr[i] << tab;
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

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

void ShiftLeft(int arr[], const int n, int shift_l)
{
	for (int i = 0; i < shift_l; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++) arr[i - 1] = arr[i];
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(double brr[], const int n, int shift_l)
{
	for (int i = 0; i < shift_l; i++)
	{
		double buffer = brr[0];
		for (int ii = 1; ii < n; ii++)
		{
			brr[ii - 1] = brr[ii];
		}
		brr[n - 1] = buffer;
	}
}

void ShiftLeft(float arr[], const int n, int shift_l)
{
	for (int i = 0; i < shift_l; i++)
	{
		float buffer = arr[0];
		for (int ii = 1; ii < n; ii++)
		{
			arr[ii - 1] = arr[ii];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftLeft(char arr[], const int n, int shift_l)
{
	for (int i = 0; i < shift_l; i++)
	{
		char buffer = arr[0];
		for (int ii = 1; ii < n; ii++)
		{
			arr[ii - 1] = arr[ii];
		}
		arr[n - 1] = buffer;
	}
}

void ShiftRight(int arr[], const int n, int shift_r)
{
	ShiftLeft(arr, n, n - shift_r);
}

void ShiftRight(double arr[], const int n, int shift_r)
{
	for (int i = 0; i < shift_r; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
		arr[0] = buffer;
	}
}

void ShiftRight(float arr[], const int n, int shift_r)
{
	for (int i = 0; i < shift_r; i++)
	{
		float buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
		arr[0] = buffer;
	}
}

void ShiftRight(char arr[], const int n, int shift_r)
{
	for (int i = 0; i < shift_r; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
		arr[0] = buffer;
	}
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
