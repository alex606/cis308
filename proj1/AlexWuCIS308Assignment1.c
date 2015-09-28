/**********************************************
* Name: Alexander Wu			      *
* Date: 09/08/2015			      *
* Assignment: Project 1: Binary counting      *
***********************************************
* takes	a number and then count in binary from 0 up to that number, printing each one
***********************************************/

#include <stdio.h>

// returns the biggest	power of 2 less	than or	equal to decimal	
int biggestPower2(int decimal)
{
	int base = 2;
	if(decimal <base)
	{
		return 0;
	}
	else
	{
		return biggestPower2(decimal/base)+1;
	}
}

// Prints the binary numbers from 0 up to  decimal. power2 is biggest power of 2 less than or equal to the decimal
void printBinary(int decimal, int power2)
{
	if(decimal > 0)
	{
	printBinary(decimal-1, biggestPower2(decimal-1));
	}
	int i = 0;
	char arr[256];
	
	for(i=0; i <=power2; i++)
	{
		arr[i]=decimal%2;
		decimal = decimal >> 1;
	}
	for(i=power2 ; i>=0 ; i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int a;
	printf("Enter the number to count up to: ");
	scanf("%d",&a);
	printBinary(a,biggestPower2(a));
	return 0;
}
