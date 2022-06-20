#include <stdio.h>
#include "student.h"
#include <string.h>

void findarray(char name[], int index, char findArray[])
{	
	FILE *fp;
	char array[MAX], *result;
	int arrayIndex = 0, findIndex = 1;
	char temp = 0;
	int count = 0;

	fp = fopen(name, "r");
	while (count != index)
	{
		result = fgets(array, MAX, fp);
		count++;
	}

	
	while (result[arrayIndex] != '\n')
	{
		if (result[arrayIndex] != findArray[findIndex])
		{
			if (result[arrayIndex] == ' ')
			{
				findIndex = 0;
			}
		}
		if (findIndex == strlen(findArray))
		{
			break;
		}
		arrayIndex++;
		findIndex++;
	}

	arrayIndex++;
	arrayIndex++;
	arrayIndex++;
	arrayIndex++;

	while(result[arrayIndex] != '\n')
	{
		printf("%c", result[arrayIndex]);
		arrayIndex++;
	}

	printf("\n");

}


	
int main(int argc, char* argv[])
{
	char temp[MAX];
	int index = 0;
	char array[MAX];
	
	printf("파일이름 : ");
	scanf("%s", temp);
	printf("찾을 라인 : ");
	scanf("%d", &index);
	printf("찾을 문자열 : ");
	scanf("%s", array);	

	findarray(temp, index, array);

	return 0;
}

