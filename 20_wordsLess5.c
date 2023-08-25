
#include <stdio.h>

int main()
{
	// Local decleration		
	int i, words = 0, len = 0;
	char a[100];
	
	//Input	
	printf("Enter the letters\n");
	i = 0;
	while (1)
	{
		a[i] = getchar();
		if (a[i] == '\n')
			break;
		i++;
	}
		
	// Preview
	printf("\nPREVIEW\n");
	i = 0;
	while (1)
	{
		printf("%c", a[i]);
		if (a[i] == '\n')
			break;
		i++;
	}

	//Logic
	i = 0;
	while (1)
	{
		if (a[i] != ' ') 
			len++;
		if (a[i] == ' ' && a[i + 1] != ' ' && a[i + 1] != '\n' && len <= 5 && len > 0)
		{
			words++;
			len = 0;
		}	
		if (a[i] == ' ' && a[i + 1] != ' ' && a[i + 1] != '\n')
		{
			len = 0;
		}		
		if (a[i] == '\n')
		{
			if (len <= 5 && len > 0)
			{
				words++;
			}
			break;
		}
		i++;
	}

	printf("\nTotal numbers of words length less than equal to 5 is %d\n", words);

	return 0;
}
