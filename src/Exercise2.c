/*
2.	Write a program to receive integers, the program ends when user input 0. 
Print the minimum (different from 0) and maximum number (different from 0) among the received numbers.
Ex:
 ____________________________________
| Input: -3 5 -2 9 8 10 5 -1 0       |
| Output: Max: 10                    |
|         Min: -3                    |
|____________________________________|
*/
#include<stdio.h>
int main()
{
	int i, Max, Min;
	printf(" Input: ");
	scanf_s("%d", &i);
	Max = i;
	Min = i;
	while (i!=0)
	{
		if (Max < i)
			Max = i;
		if (Min > i)
			Min = i;
		scanf_s("%d", &i);
	}
	printf("Max: %d\i", Max);
	printf("Min: %d\i", Min);
	float ave = (Max + Min)*1.0 / 2;
	printf("ave %f", ave);
	return 0;
}