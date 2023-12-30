The file contains 2 functions at the moment, both utilizing the concept of pointer arithmetic.
The first function is called sum, it adds up all elements in an array and returns their sum.
The second function is called rev, it reverses elements of an array without making use of any standard libraries.

Test code for source.cpp (to implement array reversal): 
int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	rev(arr, 6);
	return 0;
}
