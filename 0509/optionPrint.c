#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *fp;
	char p;

	fp = fopen(argv[1], "r");
	p = fgetc(fp);
	while (p != EOF)
	{
		p = fgetc(fp);
		if (p == ':')
		{
			p = fgetc(fp);
			while ( p != '\n')
			{
				p = fgetc(fp);
		 		printf("%c", p);
			}
			return 0;
		}
	}

	fclose(fp);
	return 0;
}


