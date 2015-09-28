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

void sortBySize(int **array, int rows)
{
	int i, j;
	int *temp;
	printf("\n%d\n\n", array[1][0]);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<rows;j++)
		{
			if(array[j+1] > array[j])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;				
			}				
		}
	}
}
void sortList(int *array, int columns)
{
	int i,j, temp;
	for(i=1;i<columns;i++)
	{
		for(j=1;j<columns;j++)
		{
			if(array[j+1] < array[j])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;			
			}
		}
	}	
}

void printList(int **array, int rows)
{
	int i,j;
	printf("%d\n", rows);
	for(i=0;i<rows;i++){
		for(j=0;j<=array[i][0];j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) 
{
	int  i=0,j=0;
	char *filename = argv[1];
	FILE *fp = fopen(filename,"r");
	char line[256];
	int **array;
	char *token;
	int flag = 1;
	int rows;
	while(fgets(line, sizeof(line), fp))
	{
		token = strtok(line, ",:");
		if(i == 0 && j == 0 && flag)
		{
			array = malloc(atoi(token)*sizeof(int));
			flag = 0;
			rows = atoi(token);
			printf("%d\n", atoi(token));
			continue;
		}
		while (token != NULL) 
		{
			if(j==0)
			{
				array[i] = malloc((atoi(token))*sizeof(int));
				array[i][j] = atoi(token);
				printf("%d ", atoi(token));
				token = strtok(NULL, ",:");
				j++;
			}
			else
			{
				printf("%d ", atoi(token));
				array[i][j] = atoi(token);
				token = strtok(NULL, ",:");
				j++;
			}
		}
		printf("\n");
		j=0;
		i++;

	}
printf("\n");
sortBySize(array, rows);

for(i=0;i<rows;i++)
{
	sortList(array[i], array[i][0]);
}	
printList(array,rows);
fclose(fp);
return 0;
}
