
/****************************************************
* Name: Alexander Wu                             	*
* Date: 9/28/2015                            		*
* Assignment: Project 2: Jagged Arrays    			*
*****************************************************
* 	c Program that takes the name of a file as a
command line arguement, and re-orders the
lists of the file from smallest to biggest size
and sort the numbers from least to greatest
*****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// use bubble sort to sort the lines of the jagged double array
void sortBySize(int **array, int rows)
{
	int i, j;
	int *temp;
	
	for (i = 0; i<rows; i++)
	{
		for (j = 0; j<rows-1; j++)
		{
			if ((array[j + 1][0]) < (array[j][0]))
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

// use bubble sort to sort the contents of each line of the jagged double array
void sortList(int *array, int columns)
{
	int i, j, temp;
	for (i = 1; i<columns; i++)
	{
		for (j = 1; j<columns; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

// function to print the values of the jagged double array
void printList(int **array, int rows)
{
	int i, j;
	printf("%d\n", rows);
	for (i = 0; i<rows; i++){
		for (j = 1; j <= array[i][0]; j++){
			
			//acount for correct comma placement
			if(j == array[i][0])
			{
				printf("%d", array[i][j]);
			}
			else{
				printf("%d, ", array[i][j]);
			}
		}
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	int  i = 0, j = 0;
	char *filename = argv[1];
	FILE *fp = fopen(filename, "r");
	char line[256];
	int **array;
	char *token;
	int flag = 1;
	int rows;
	while (fgets(line, sizeof(line), fp))
	{
		token = strtok(line, ",:");
		
		// used to get the correct amount of rows to allocate
		if (i == 0 && j == 0 && flag)
		{
			array = malloc(atoi(token)*sizeof(*array));
			flag = 0;
			rows = atoi(token);
			continue;
		}
		while (token != NULL)
		{
			// used to get the correct amount of columns to allocate
			if (j == 0)
			{
				array[i] = malloc((atoi(token))*sizeof(*array));
				array[i][j] = atoi(token);
				token = strtok(NULL, ",:");
				j++;
			}
			else
			{				
				array[i][j] = atoi(token);
				token = strtok(NULL, ",:");
				j++;
			}
		}		
		j = 0;
		i++;
	}	
	
	// sorting function calls
	sortBySize(array, rows);
	for (i = 0; i<rows; i++)
	{
		sortList(array[i], array[i][0]);
	}
	
	// print out the values
	printList(array, rows);
	
	// free the memory
	for (i = 0; i < rows; ++i) 
	{
		free(array[i]); 		
	}
	free(array);
	
	fclose(fp);
	return 0;
}
