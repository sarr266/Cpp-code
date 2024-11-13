int sum(const int* array_beg, int arr_size)
{
	int sum = 0;
	for (int i = 0; i < arr_size; i++)
	{
		sum += *array_beg;
		array_beg += 1;
	};
	return sum;
}

//another way to implement sum
int sumarr(const int* begarr)
{
	int sum = 0;
	int lenarr = sizeof(*begarr / 4);
	for (int i = 0; i < lenarr; i++)
	{
		sum += *begarr;
		begarr = begarr + 1;
	}
	return sum;
}

void rev(int* array_beg, int arr_size)
{
	int* array_end = (array_beg + arr_size-1);
	for (int i = 0; i < (arr_size/2); i++, array_beg++, array_end--)
	{
		if (array_beg == array_end)
		{
			return;
		}
		else
		{
			int temp = *array_beg;
			*array_beg = *array_end;
			*array_end = temp;
		}
	}
}

//another way to implement rev
void rev_arr(int* beg, int size)
{
	int* b = beg;
	int* e = beg + size - 1;
	while (b < e)
	{
		int beg = *b;
		*b = *e;
		*e = beg;

		b++;
		e--;
	}
}

int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	rev(arr, 6);
	return 0;
}
