#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char* enc(char s[]);

int main(void)
{
	int random, i = 0, j = 0;
	char sent[200];
	char cryp_sent[200];
	int key[200];

	srand(time(NULL));

	printf("Enter the string you want to encrypt: ");
	gets(sent);

	//actual encryption
	while (sent[i] != '\0')
	{
		random = rand()%10;
		cryp_sent[i] = sent[i] + random;
		key[i] = random;

		i++;
	}

	printf("The encyrpted sentence is: %s\n", cryp_sent);
	
	printf("Your key is: ");
	while (sent[j] != '\0')
	{
		printf("%d", key[j]);

		j++;
	}
	
	return 0;
}