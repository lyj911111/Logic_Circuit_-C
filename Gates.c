#include<stdio.h>

int ANDgate(int a, int b)
{
	int output = (a * b);
	return output;
}

int ORgate(int a, int b)
{
	int output = a + b;
	if (output == 2)
		return 1;
	return output;
}

int NANDgate(int a, int b)
{
	int output;
	output = ANDgate(a, b);
	if (output == 0)
		output = 1;
	else
		output = 0;
	return output;
}

int NORgate(int a, int b)
{
	int output;
	output = ORgate(a, b);
	if (output == 0)
		output = 1;
	else
		output = 0;
	return output;
}

int main()
{
	int a = 0;
	int b = 0;
	int result = 0;

	// 입력
	printf("1 또는 0값을 입력하시오:\n");
	scanf_s("%d %d", &a, &b);

	// 예외처리
	if (a > 1 || b > 1)
	{
		printf("잘못 입력하셨습니다.");
		return 0;
	}

	// 결과출력
	result = NORgate(a, b);
	printf("%d", result);


	return 0;
}