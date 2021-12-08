// Name: p11.c
// Purpose: Program approximates e by computing the value of 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
// when n is an integer entered by the user
// Author: EM

#include <stdio.h>

int main(void)
{
        int n;
	int e = 0;
	int f = 1;

	printf("Enter a number: ");
	scanf("%d", &n);

	while (n >= 1) {
		f = n * f;

		e += f;
		n--;
	}
	printf("%d\n", f);

	printf("%d\n", e);

        return 0;
}
