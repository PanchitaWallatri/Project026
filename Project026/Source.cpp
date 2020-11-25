#include<stdio.h>
int x(int U, int V, int T)
{
	int S;
	if (U < 0 || T < 0)
	{
		S = -1;
	}
	else
	{
		S = ((U + V) / 2) * T;
	}
	return S;
}
int main()
{
	struct info
	{
		int S;
		int U;
		int T;
		int V;
	} car1, car2;

	printf("Car1\n");
	printf("Enter 1st speed (m/s): ");
	scanf_s("%d", &car1.U);
	printf("Enter 2nd speed (m/s): ");
	scanf_s("%d", &car1.V);
	printf("Enter time (s): ");
	scanf_s("%d", &car1.T);

	printf("\nCar2\n");
	printf("Enter 1st speed (m/s): ");
	scanf_s("%d", &car2.U);
	printf("Enter 2nd speed (m/s): ");
	scanf_s("%d", &car2.V);
	printf("Enter time (s): ");
	scanf_s("%d", &car2.T);

	car1.S = x(car1.U, car1.V, car1.T);
	car2.S = x(car2.U, car2.V, car2.T);

	if (car1.S == -1)
	{
		printf("\n Car1 is error!");
	}
	else printf("\n The distance that the car1 can move is %d", car1.S);

	if (car2.S == -1)
	{
		printf("\n Car2 is error!");
	}
	else printf("\n The distance that the car2 can move is %d", car2.S);

	return 0;
}