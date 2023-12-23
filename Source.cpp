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


int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	rev(arr, 6);
	return 0;
}
