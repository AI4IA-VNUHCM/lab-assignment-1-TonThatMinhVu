/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/
#include<stdio.h>
int main()
{
    int i, prime, lim, n;
	printf("\n Enter Limit(N) : ");
    scanf("%d", &lim);
    printf("\n PRIME NUMBERS less than [ %d ] are : \n\n",lim);
	for(n=1; n<lim; n++)
    {
        prime = 1;
        for(i=2; i<n; i++)
            if(n%i == 0)
            {
                prime = 0;
                break;
            }
        if(prime)
            printf(" %d ",n);
    }

    printf("\n");
    return 0;
