#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char cryp_sent[200];
	char dec_sent[200];
	int key[200], len = 0, i = 0, j = 0, k = 0;
	
	printf("Enter the encyrpted message: ");
	gets(cryp_sent);

	while (cryp_sent[k] != '\0')
	{
		len += 1;
		k++;
	}

	char key_inp[len+1];

	i = len;
	
	printf("Enter your key: ");
	scanf("%s", &key_inp);

	printf("\n %s \n", key_inp);

	//actual decryption
	while (cryp_sent[j] != '\0')
	{
		dec_sent[j] = cryp_sent[j] - (key_inp[j]-'0');
		j++;
	}

	printf("The decrypted message is: %s\n", dec_sent);

	return 0;
}