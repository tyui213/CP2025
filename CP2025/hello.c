#include<stdio.h>

void cpy_array(int from[], int to[], int sz);
#ifdef DEBUG
int test_copy_array(void);
#endif DEBUG
int main()
{
	printf("hello");

	return 0;
}
#ifdef DEBUG
int test_copy_array(void)
{
#define LEN 5
	int x[LEN] = { 1,2,3,4,5 };
	int y[LEN] = { 0 };

	int size = sizeof(y) / sizeif(y[0]);

	coppy_array(x, y, LEN);

	for (int i = 0; i < LEN)
	{
		if (y[i] != x[i])
		{
			return -1;
		}

	}

	return 0;
}
#endif DEBUG
void copy_array(int from[], int to[], int sz)
{
	int i = 0;

	for (int i = 0; i < sz; i++)
	{
		to[i] = from[i];
	}
}