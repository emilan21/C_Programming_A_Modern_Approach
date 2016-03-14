/* Translates a message entered by the user into BIFF speak */

#include <stdio.h>
#include <string.h>

#define SIZE ((int) (sizeof(message) / sizeof(message[0])))

int main(void)
{
	char message[1000];
	int i;

	for (i = 0; i < SIZE; i++)
		message[i] = 0;

	printf("Enter message: ");
	for (i = 0; i < SIZE; i++) {
		scanf("%c", &message[i]);
			if (message[i] == '\n')
				break;
	}
	
	message[i] = '\0';
	
	for (i = 0; i < SIZE; i++) {
		if ((message[i] >= 'a')  && (message[i] <= 'z'))
			message[i] = message[i] - 32;
		switch (message[i]) {
			case 'A': 
				message[i] = '4';
				break;
			case 'B': 
				message[i] = '8';
				break;
			case 'E':
				message[i] = '3';
				break;
			case 'I':
				message[i] = '1';
				break;
			case 'O':
				message[i] = '0';
				break;
			case 'S':
				message[i] = '5';
				break;
		}
	}		

	printf("In B1FF-speak: ");
	for (i = 0; i <= strlen(message); i++) {
		printf("%c", message[i]);
	}
	printf("!!!!!!!!!!\n");

	return 0;
}
