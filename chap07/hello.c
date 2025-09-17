/*
�̸�: ������
��¥: 0917
����: 8�� ������ �ǽ�
*/

#include<stdio.h>

void* swapDouble(double* pa, double* pb);//���漱��
void print_array_double(double arr[], int sz);//���漱��
void printArryDouble(double* arr, int sz);//���漱��
int test_print_arry();//���漱��
int test_function_pointer();//���漱��
int main()
{
	//test_swap;
	test_print_arry();
	test_function_pointer();
	return 0;
}

int test_swap()
{
	printf("Hello,World\n");

	double a = 3.14;
	double b = 5.12;

	double* presult = (double*)swapDouble(&a, &b);
	if (presult == NULL)
	{
		printf("���� �߸��Ǿ���!\n");
	}
	else
	{
		printf("a = %lf, b = %lf\n,", a, b);
	}

	double* presult1 = (double*)swapDouble(&a, &b);
	if (presult1 == NULL)
	{
		printf("���� �߸��Ǿ���2!\n");
	}
	else
	{
		printf("a = %lf, b = %lf\n,", a, b);
	}

}

void* swapDouble(double* pa, double* pb)
{
	//1. �߷� �� �������� üũ: NULL�� �ƴϿ�����
	if (pa = NULL || pb == NULL)
	{
		return NULL;
	}
	//2.swap two values
	double tmp = *pa;
	*pa = *pb;
	*pb = tmp;

	return pa;
}

int test_print_arry()
{
	double da[] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	int size = sizeof(da) / sizeof(da[0]);

	print_array_double(da, size);

	printArryDouble(da, size);
	
	return 0;
}


// ���: 1���� �Ǽ� �迭�� ����Ѵ�.
// �Լ���: print_array_double
// �Է�: double Ÿ�� 1���� �迭 �ּ�
// ���: �͹̳ο� �迭�� ������ ���ڰ� ���
// ��ȯ: ����

void print_array_double(double arr[], int sz) 
{
	for (int i = 0; i < sz; i++)
	{
		printf("% lf", arr[i]);
	}
	printf("\n");
}


void printArryDouble(double* arr, int sz)
{
	for (int i = 0; i < sz; i++,arr++)
	{
		printf("% lf", *arr);
	}
	printf("\n");
}

int test_function_pointer()
{
	double (*pfunc)(double, double) = NULL;
	double result = 0;

	pfunc = add;

	printf("add(3, 4) = %lf\n", add(3, 0, 4.0));

	add(3, 4);

	double result = (*pfunc) (3.0, 4.0); //7.0?
}

//���� ���� ��� ��ȯ
//�Է�: �� �Ǽ� 
//���: ���� ��
double add(double a, double b)
{
	return a + b;
}
//��� ���� ����
//�Է�: �� ����
//���: �� ��
double sub(double a, double b)
{
	return a - b;
}

//���: ��������
//�Է�: �� ����
//���: ������
double mul(double a, double b)
{
	return a * b;
}