#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *fp;
	char p;
	char temp[100];

	fp = fopen(argv[1], "r");

	fgets(temp, 100, fp);
	while (p != EOF)
	{
		p = fgetc(fp);
		if( p == ':')
		{
			p = fgetc(fp);
			while (p != '\n')
			{
				p = fgetc(fp);
				printf("%C", p);
			}
			return 0;
		}
	}

	fclose(fp);
	return 0;
}
