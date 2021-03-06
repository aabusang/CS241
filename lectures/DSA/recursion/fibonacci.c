#include <stdio.h>
#include <stdlib.h>

int lFibonacci(int number);
int rFibonacci(int number);

int main(void)
{
    int number = 5;
    int l = lFibonacci(number);
    int rec = rFibonacci(number);

    printf("Loop: 10th Fibonacci is %d\n", l);
    printf("Recursion: %d\n",rec);
    
}

int lFibonacci(int number)
{
    int i;
    int firstFibNumber = 0, secondFibNumber = 1;
    int sum;

    for (i = 0; i < number; i++)
    {
	sum = firstFibNumber + secondFibNumber;
	firstFibNumber = secondFibNumber;
	secondFibNumber = sum;
    }

    return sum;
}

int rFibonacci(int number)
{
    if (number == 0 || number == 1)
    {
	return 1;
    }
    else
    {
	return rFibonacci(number - 1) + rFibonacci(number - 2);
    }
}
