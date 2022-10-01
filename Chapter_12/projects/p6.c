/* Sorts an array of intergers using Quicksort algorithm */

#include <stdio.h>

#define N 10

void quicksort(int *low, int *high);
int * split(int *low, int *high);

int
main(void)
{
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int *low = a;
    int *high = a + N - 1;

    quicksort(low, high);

    printf("In sorted order: ");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

void
quicksort(int *low, int *high)
{
    int *middle;

    if (low >= high) {
        return;
    }
    middle = split(low, high);
    quicksort(low, middle - 1);
    quicksort(middle + 1, high);
}

int
*split(int *low, int *high)
{
    int part_element = *low;

    for (;;) {
        while (low < high && part_element <= *high) {
            high -= 1;
        }
        if (low >= high) {
            break;
        }
        //low += 1;
        *low++ = *high;

        while (low < high && *low <= part_element) {
            low += 1;
        }
        if (low >= high) {
            break;
        }
        //high -= 1;
        *high-- = *low;
    }

    *high = part_element;
    return high;
}
