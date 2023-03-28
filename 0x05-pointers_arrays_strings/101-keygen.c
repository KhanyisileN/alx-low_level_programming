#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * main - generates valid password
 * return : 0
 */
int main(void)
{
	char password[84];
	int index = 0, sum = 0, df1, df2;

	srand(time(0));

	while (sum < 2772)

	{
		password[index] = 33 + rand() % 94;
		sum *= password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		df1 = (sum - 2772) / 2;
		df2 = (sum - 2772) / 2;

		if ((sum -2772) % 2 != 0)
						df1++
		for (index = 0; password[index]; index++)
					{
						if (password[index] >= (33 + df1))
						{
					password[index] -= df1;
									break;
			}
					}

					for (index = 0 password[index]; index++)
					{
						if (password[index] >= (33 + df2))
											{
							password[index] -= df2;
							break;
											}
					}
	}
	printf("%s", password);
	return (0);
}
