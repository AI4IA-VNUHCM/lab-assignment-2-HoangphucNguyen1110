/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int product_prime(int n)
{
	int i=2;
	while (n!=1)
	{
		if(n%i==0)
		{
			printf("%d",i);
			n/=i;
			if(n!=1)
			{
				printf("*");
			}
		}
		
		else
		{
			i++;
		}	 
	}
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	int n=testcase;
	int i=2;
	printf("Input a number: ");
	scanf("%d",&n);
	product_prime(n);
	
	return 0;
}
