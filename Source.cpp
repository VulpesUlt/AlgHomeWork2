#include <iostream>

bool primeCheck(int num)
{
	for (int div = 2; div < num / 2; div++)
	{
		if (num % div == 0)
			return false;
	}
	return true;
}

int main()
{
	int num;
	printf("Enter your number: ");
	scanf_s("%i", &num);
	if (primeCheck(num))
		printf("%d %s", num, "is a prime number \n");
	else
		printf("%d %s", num, "isn't a prime number \n");

	printf("hello world!");
}