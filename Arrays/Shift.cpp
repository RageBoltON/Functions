

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