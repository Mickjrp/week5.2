#include <stdio.h>
#include <string.h>

char input[100];

void func()
{
	char n[] = { 'a','e','i','o','u' };
	char v[] = { '0','1','2','3','4' };

	int i = strlen(input)-4;
	for (input[i];i >= 0;i--)
	{
		if (input[i] == v[0] || input[i] == v[1] || input[i] == v[2] || input[i] == v[3] || input[i] == v[4])
		{
			for (int k = 0;k <= 4;k++)
			{
				if (input[i] == v[k])
				{
					printf("%c", n[k]);
				}
			}
			int k = 0;
		}
		else
		{
			printf("%c", input[i]);
		}
	}
}

int main()
{
	printf("Input: ");
	scanf_s("%s", input, sizeof(input));

	func();
	

	return 0;
}