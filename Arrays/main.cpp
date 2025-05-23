#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"








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












