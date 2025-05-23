#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 11, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n, int minRand = 65, int maxRand = 90);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
int Sum(T arr[], const int n);

//int Sum_char_to_int(int arr[], const int n);
template<typename T>
double Avg(T arr[], const int n);

template<typename T>
int MinValueIn(T arr[], const int n);

template<typename T>
T MaxValueIn(T arr[], const int n);

void ShiftLeft(int arr[], const int n, int shift_l);

void ShiftRight(int arr[], const int n, int shift_r);

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
	cout << "MinValueIn: " << MinValueIn(brr, SIZE) << endl;
	cout << "MaxValueIn: " << MaxValueIn(brr,SIZE) << endl;
	cout << "Summa: " << Sum(arr, n) << endl;
	cout << "Avg: " << Avg(brr, SIZE) / 1000. << endl;

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

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
T Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	double avg = ((double)Sum(arr, n) / n) * 1000;
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

void ShiftRight(int arr[], const int n, int shift_r)
{
	ShiftLeft(arr, n, n - shift_r);
}

template<typename T>
T MinValueIn(T arr[], const int n)
{
	T arr_min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < arr_min)arr_min = arr[i];
	}
	return arr_min;
}

template<typename T>
T MaxValueIn(T arr[], const int n)
{
	T arr_max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr_max)arr_max = arr[i];
	}
	return arr_max;
}

