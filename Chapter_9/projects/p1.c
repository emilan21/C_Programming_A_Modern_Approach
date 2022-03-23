// Name: p1.c
// Purpose: Sorts an array of intergers 
// Author: EM

#include <stdio.h>

void
selection_sort(int array_size, int array[])
{
    int largest = 0;
    int temp;
    int swap;

    if (array_size < 0) {
        return;
    }

    for (int i = 0; i < array_size + 1; i++) {
        if (array[i] >= largest) {
            largest = array[i];
            temp = i;
        }
    }

    swap = array[array_size];
    array[array_size] = largest;
    array[temp] = swap;

    selection_sort(array_size - 1, array);
}

int main(void)
{
        int array_size;
        int i;

        printf("Enter the amount of intergers that need sorted: ");
        scanf("%d", &array_size);
        int a[array_size];
        printf("Enter array of intergers: ");
        for (i = 0; i < array_size; i++) {
            scanf("%d", &a[i]);
        }

        selection_sort(array_size - 1, a);

        for (i = 0; i < array_size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");

        return 0;
}
