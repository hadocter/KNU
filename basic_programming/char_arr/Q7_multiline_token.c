#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
	char text[10][100];
	

	
	char* delimiter = " ,.!\t";

	int i = 0;
	int linect = 0;
	while (gets(text[i]))
	{
		text[i++];
		linect++;
	}

	char* ptoken;
	char* ptr;
	for (i = 0; i < linect; i++)
	{
		printf("\n<< %d줄에 입력한 단어(토큰) 출력 >>\n", i + 1);
		ptr = text[i];
		ptoken = strtok(ptr, delimiter);
		while (ptoken != '\0')
		{
			printf("strlen(%s) = %d\n", ptoken, strlen(ptoken));
			ptoken = strtok(NULL, delimiter);
		}

	}

	return 0;
}